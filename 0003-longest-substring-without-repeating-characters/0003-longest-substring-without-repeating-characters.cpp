class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        long long m=0,l=0,r=0;
        unordered_set<char>se;
        while(r<s.size()){
            while(se.find(s[r])!=se.end()){
                se.erase(s[l]);
                l++;
            }
            se.insert(s[r]);
            m=max(m,r-l+1);
            r++;
        }
        return m;
    }
};