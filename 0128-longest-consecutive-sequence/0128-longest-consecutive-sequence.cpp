class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int c=0,res=1;
        int last=INT_MIN;
        sort(nums.begin(),nums.end());
        if(nums.size()==0)
        {
            return 0;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]-1==last)
            {
                c+=1;
                last=nums[i];
            }
            else if(nums[i]!=last)
            {
                c=1;
                last=nums[i];

            }
            res=max(res,c);
        }
        return res;
    }
};