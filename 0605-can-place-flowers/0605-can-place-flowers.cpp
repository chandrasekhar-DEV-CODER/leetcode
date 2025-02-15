class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int c=0;
        for(int i=0;i<f.size();i++){
            if(f[i]==0){
                bool l=(i==0)||(f[i-1]==0);
                bool r=(i==f.size()-1)|| (f[i+1]==0);
                if(l && r){
                    f[i]=1;
                    c++;
                }
            }
        }
        return c>=n;
    }
};