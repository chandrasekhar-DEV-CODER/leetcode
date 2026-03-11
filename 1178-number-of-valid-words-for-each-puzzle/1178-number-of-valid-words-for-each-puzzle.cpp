class Solution {
public:
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
         unordered_map<int,int> freq;
        for (auto &w : words) {
        int mask = 0;
        for (char c : w) mask |= (1 << (c - 'a'));
        if (__builtin_popcount(mask) <= 7) { 
            freq[mask]++;
        }
    }

    vector<int> ans; 
    for (auto &p : puzzles) {
        int mask = 0;
        for (char c : p) mask |= (1 << (c - 'a'));
        int first = 1 << (p[0] - 'a');

        int count = 0; 
        for (int sub = mask; sub; sub = (sub - 1) & mask) {
            if (sub & first) {  
                if (freq.count(sub)) count += freq[sub];
            }
        }
        ans.push_back(count);
    }
    return ans;

    }
};