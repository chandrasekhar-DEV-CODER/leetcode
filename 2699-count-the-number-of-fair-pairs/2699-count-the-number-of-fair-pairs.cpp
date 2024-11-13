class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
      /*  int c=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]<=upper && nums[i]+nums[j]>=lower )
                {
                    c++;
                }
            }
        }
        return c;*/
        sort(nums.begin(), nums.end());
        long long count = 0;
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            int left = i + 1, right = n - 1;

            // Find the first position where nums[i] + nums[left] >= lower
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (nums[i] + nums[mid] >= lower) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            int start = left;

            // Find the last position where nums[i] + nums[right] <= upper
            left = i + 1, right = n - 1;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (nums[i] + nums[mid] <= upper) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
            int end = right;

            // Count the number of fair pairs for the current i
            if (start <= end) {
                count += end - start + 1;
            }
        }

        return count;
    }
};