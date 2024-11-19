class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
    unordered_set<int> windowSet;
    long long maxSum = 0, currentSum = 0;
    int n = nums.size();
    int left = 0;
    for (int right = 0; right < n; ++right) {
        while (windowSet.count(nums[right])) {
            currentSum -= nums[left];
            windowSet.erase(nums[left]);
            ++left;
        }
        windowSet.insert(nums[right]);
        currentSum += nums[right];
        if (right - left + 1 == k) {
            maxSum = max(maxSum, currentSum);
            currentSum -= nums[left];
            windowSet.erase(nums[left]);
            ++left;
        }
    }
    return maxSum;
    }
};