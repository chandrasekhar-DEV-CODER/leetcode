class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int m = 1;         
        int zeroCount = 0;  
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zeroCount++;
            } else {
                m *= nums[i];
            }
        }
        if (zeroCount > 1) {
            fill(nums.begin(), nums.end(), 0);
            return nums;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                nums[i] = m;
            } else if (zeroCount == 0) {
                nums[i] = m / nums[i]; 
            } else {
                nums[i] = 0;
            }
        }

        return nums;
    }
};