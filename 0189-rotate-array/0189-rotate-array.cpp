class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        for(int i=0;i<nums.size()/2;i++){
            swap(nums[i],nums[nums.size()-i-1]);
        }
        for(int i=0;i<k/2;i++){
            swap(nums[i],nums[k-i-1]);
        }
        for(int i=0;i<(nums.size()-k)/2;i++){
            swap(nums[k+i],nums[nums.size()-i-1]);
        }
        
    }
};