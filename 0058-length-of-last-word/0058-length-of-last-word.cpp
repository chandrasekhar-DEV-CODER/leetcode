class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0,a=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' ')
            {
                if(a==1)
                {
                    break;
                }
            }
            else{
                a=1;
                c++;
            }
        }
        return c;
    }
};