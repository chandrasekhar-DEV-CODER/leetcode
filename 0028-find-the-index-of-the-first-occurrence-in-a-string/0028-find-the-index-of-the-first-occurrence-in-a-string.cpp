class Solution {
public:
    int strStr(string a, string b) {
        int n=a.size(),m=b.size();
        if(n<m){
            return -1;
        }
        int aa=1;
        for(int i=0;i<=n-m;i++)
        {
            aa=1;
            for(int j=0;j<m;j++)
            {
                if(a[i+j]!=b[j])
                {
                    aa=0;
                    break;
                }
            }
            if(aa==1)
            {
                return i;
            }
        }
        return -1;
    }
};