class Solution {
public:
int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }

    int atMost(vector<int>& nums, int goal) {
        if(goal<0)return 0;
        long long r=0,l=0,m=0,a=0,c=0;
        while(r<nums.size())
        {
            a+=nums[r];
            while(a>goal){
                a-=nums[l];
                l++;
            }
            c+=(r-l+1);
            r++;
        }
        return c;
    }
};