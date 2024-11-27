class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int a=word1.size(),b=word2.size();
        int m=min(a,b);
        string p;
        for(int i=0;i<m;i++)
        {
            p+=word1[i];
            p+=word2[i];
        }
        return p+word1.substr(m)+word2.substr(m);
    }
};