class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=0;
        for(int ans=0;i<nums.size() && i<=ans;i++)
        {
            ans=max(ans,i+nums[i]);
        }
        return i==nums.size();
    }
};