class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        long long l=0,r=0,m=0;
        unordered_set<char>a;
        while(r<s.size()){
            while(a.find(s[r])!=a.end()){
                a.erase(s[l]);
                l++;
            }a.insert(s[r]);
            m=max(m,r-l+1);
            
            r++;
        }
        return m;
    }
};