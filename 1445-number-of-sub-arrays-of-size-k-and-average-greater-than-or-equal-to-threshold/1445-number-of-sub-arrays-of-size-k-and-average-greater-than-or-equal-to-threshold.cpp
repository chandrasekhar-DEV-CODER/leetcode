class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int t) {
        long long l=0,r=0,m=0,su=0;
        unordered_set<long long>s;
        while(r<nums.size()){
            su+=nums[r];
            s.insert(nums[r]);
            if(r-l+1>k){
                s.erase(nums[l]);
                su-=nums[l];
                l++;
            }
            if(r-l+1==k){
                if(su/k  >=t){
                    m++;
                }
                
            }
            r++;
        }
        return m;
    }
};