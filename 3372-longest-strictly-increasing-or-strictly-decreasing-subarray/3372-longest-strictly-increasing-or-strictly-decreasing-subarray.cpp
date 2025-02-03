class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int l=1,d=1,r=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1]){
                l++;
                d=1;
            }
            else if(nums[i]<nums[i-1]){
                d++;
                l=1;
            }
            else{
                l=d=1;
            }
            r=max(r,max(l,d));
        }
        return r;
    }
};