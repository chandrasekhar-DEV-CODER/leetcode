class Solution {
public:
    int characterReplacement(string s, int k) {
        long long l=0,r=0,m=0,a=0;
        unordered_map<char,long long>s1;
        while(r<s.size())
        {
            s1[s[r]]++;
            m=max(m,s1[s[r]]);
            while((r-l+1)-m>k){
        s1[s[l]]--;
        l++;}
a=max(a,r-l+1);
r++;
        }
        return a;
    }
};