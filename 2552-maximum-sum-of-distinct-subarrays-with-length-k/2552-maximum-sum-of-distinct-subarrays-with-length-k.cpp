class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long l=0,r=0,m=0,su=0;
        unordered_set<long long>s;
        while(r<nums.size()){
            while(s.find(nums[r])!=s.end()){
                s.erase(nums[l]);
                su-=nums[l];
                l++;
            }
            su+=nums[r];
            s.insert(nums[r]);
            if(r-l+1>k){
                s.erase(nums[l]);
                su-=nums[l];
                l++;
            }
            if(r-l+1==k){
                m=max(m,su);
                
            }
            r++;
        }
        return m;
    }
};