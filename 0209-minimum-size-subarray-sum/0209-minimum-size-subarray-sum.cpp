class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {
        int r=0,l=0,s=0,re=INT_MAX;
        while(r<nums.size())
        {
            s+=nums[r];
        while(s>=t){
            re=min(re,r-l+1);
            s-=nums[l];
            l++;
        }
        r++;
        }
        return re==INT_MAX?0:re;
    }
};