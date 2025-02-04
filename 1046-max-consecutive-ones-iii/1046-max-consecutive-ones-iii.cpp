class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        long long l=0,r=0,m=0,z=0;
        while(r<nums.size())
        {if(nums[r]==0){
                z++;
            }
            if(z>k){
               if(nums[l]==0){
                z--;
            }
            l++;}
            
            if(z<=k){
                m=max(m,r-l+1);
            }
            r++;
        }
        return m;
    }
};