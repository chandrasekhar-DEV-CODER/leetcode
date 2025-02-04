class Solution {
public:
int subarraysWithKDistinct(vector<int>& nums, int k) {
        return subarraysWithKDistinc(nums, k) - subarraysWithKDistinc(nums, k - 1);
    }
    int subarraysWithKDistinc(vector<int>& nums, int k) {
        long long m=0,l=0,r=0;
        unordered_map<long long,long long>s;
        while(r<nums.size()){
            s[nums[r]]++;
            while(s.size()>k)
            {
                    s[nums[l]]--;
                if(s[nums[l]]==0)
                {
                    s.erase(nums[l]);
                }
                l++;
            }
            
                m+=(r-l+1);
            
            r++;
        }
        return m;
    }
};