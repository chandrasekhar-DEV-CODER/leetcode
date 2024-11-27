class Solution {
public:
    string reverseWords(string s) {
        string d="";
        string d1="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ' || i==s.size()-1)
            {
             if (i == s.size() - 1 && s[i] != ' ') {
                    d1 += s[i];
                }
                if (!d1.empty()) {
                    d = d1 + (d.empty() ? "" : " ") + d;
                }
                d1="";
            }
            else{
                d1=d1+s[i];
            }
        }
        return d;
    }
};