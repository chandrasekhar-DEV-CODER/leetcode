class Solution {
public:
    string makeFancyString(string s) {
        string ans;
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(i==0 || s[i]!=s[i-1])
            {
                c=1;
            }
            else
            {
                c++;
            }
            if(c<=2)
            {
                ans+=s[i];
            }
        }
        return ans;
    }
};