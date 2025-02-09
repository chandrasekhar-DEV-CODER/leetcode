class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int, long long> freq;
        long long n = nums.size();
        long long total_pairs = (n * (n - 1)) / 2; // Total possible pairs
        long long good_pairs = 0;

        for (int i = 0; i < n; i++) {
            int diff = nums[i] - i;
            if (freq.find(diff) != freq.end()) {
                good_pairs += freq[diff]; // Count pairs with the same difference
            }
            freq[diff]++;
        }

        return total_pairs - good_pairs; // Bad pairs = total - good pairs
    }
};
