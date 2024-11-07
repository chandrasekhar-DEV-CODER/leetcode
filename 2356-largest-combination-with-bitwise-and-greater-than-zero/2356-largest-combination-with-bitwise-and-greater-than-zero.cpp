class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int a=24;
        int ans=0;
        for(int i=0;i<a;i++)
        {
            int c=0;
            for(int j:candidates)
            {
                if(j>>i&1)
                {
                    c++;
                }
                ans=max(ans,c);
            }
        }
        return ans;
    }
};