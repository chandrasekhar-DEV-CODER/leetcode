class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int i=-1,j=-1,c=0;
        for(int k=0;k<s1.size();k++)
        {
            if(s1[k]!=s2[k]){
                c++;
                if(i==-1)i=k;
                else if(j==-1)j=k;
            }
        }
        if(c==0)return true;
        if(c==2 && s1[i]==s2[j] && s2[i]==s1[j])return true;
        return false;
    }
};