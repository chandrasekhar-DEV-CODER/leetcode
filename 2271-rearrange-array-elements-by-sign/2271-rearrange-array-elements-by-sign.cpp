class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p=0,o=1;
        vector<int>ans(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                ans[p]=nums[i];
                p+=2;
            }
            else
            {
                ans[o]=nums[i];
                o+=2;
            }
        
        }

        return ans;
    }
};