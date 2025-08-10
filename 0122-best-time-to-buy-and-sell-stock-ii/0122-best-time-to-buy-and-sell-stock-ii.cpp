class Solution {
public:
    int maxProfit(vector<int>& p) {
        int m=p[0];
        int s=0;
        for(int i=1;i<p.size();i++){
            if(m<p[i]){
                s+=p[i]-m;

            }
            m=p[i];
        }
        return s;
    }
};