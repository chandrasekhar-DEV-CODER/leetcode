class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=INT_MIN,a=INT_MAX;
        for(int i=0;i<prices.size();i++){
            a=min(a,prices[i]);
            m=max(m,prices[i]-a);
            }
        return m>0?m:0;
    }
};