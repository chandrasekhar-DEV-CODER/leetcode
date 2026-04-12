class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>f(26,0);
        int r=0,l=0;
        int ml=0,mf=0;
        while(r<s.size()){
            f[s[r]-'A']++;
            mf=max(mf,f[s[r]-'A']);
            while((r-l+1) - mf>k){
                f[s[l]-'A']--;
                l++;
            }
            ml=max(r-l+1,ml);
            r++;
        }
        return ml;
    }
};