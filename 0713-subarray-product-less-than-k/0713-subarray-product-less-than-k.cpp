class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)return 0;
        int l=0,r=0,c=0,p=1;
        while(r<nums.size())
        {
            p*=nums[r];
            while(p>=k){
                p/=nums[l];
                l++;
            }
            c+=(r-l+1);
            r++;
        }
        return c;
    }
};