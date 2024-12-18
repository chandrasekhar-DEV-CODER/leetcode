class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int>an(n);
        for(int i=0;i<n;i++)
        {
            an[i]=prices[i];
            for(int j=i+1;j<n;j++)
            {
                if (prices[j]<=prices[i]){
                    an[i]=prices[i]-prices[j]; 
                    break; 
            }
        }}
            return an;
    }
};