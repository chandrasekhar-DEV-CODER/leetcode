class Solution {
public:
    vector<bool> canMakePaliQueries(string s, vector<vector<int>>& queries) {
        int n = s.length();
        // pre[i] will store the parity (odd/even) of all letters from s[0...i-1]
        vector<int> pre(n + 1, 0);
        
        for (int i = 0; i < n; i++) {
            // XOR toggles the bit: 0 becomes 1 (odd), 1 becomes 0 (even)
            pre[i + 1] = pre[i] ^ (1 << (s[i] - 'a'));
        }
        
        vector<bool> a;
        for (auto& q : queries) {
            int start = q[0];
            int end = q[1];
            int k = q[2];
            
            // This XOR gives the parity of characters in the range [start, end]
            int mask = pre[end + 1] ^ pre[start];
            
            // Count how many bits are set to 1 (how many characters are odd)
            int odd_chars = __builtin_popcount(mask);
            
            // Same logic: each k fixes 2 odds
            a.push_back((odd_chars / 2) <= k);
        }
        
        return a;
    }
};
