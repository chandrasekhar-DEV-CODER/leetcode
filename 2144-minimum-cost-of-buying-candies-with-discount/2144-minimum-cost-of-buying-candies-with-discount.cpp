class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int r=0;
        int c=0;
        sort(cost.begin(),cost.end());
        for(int i=cost.size()-1;i>=0;i--){
            c++;
            if(c==3){
                c=0;    
            }
            else{
                r+=cost[i];
            }
        }
        return r;
        
    }
};