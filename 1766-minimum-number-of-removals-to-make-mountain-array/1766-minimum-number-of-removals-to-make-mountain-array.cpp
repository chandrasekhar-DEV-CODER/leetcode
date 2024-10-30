class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
         int n=nums.size();
        vector<int> li(n, 1), ld(n, 1);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (nums[i] > nums[j]) {
                li[i] = max(li[i], li[j] + 1);
            }
        }
    }
    for (int i = n - 1; i >= 0; --i) {
        for (int j = n - 1; j > i; --j) {
            if (nums[i] > nums[j]) {
                ld[i] = max(ld[i], ld[j] + 1);
            }
        }
    }
    int ma = 0;
    for (int i = 1; i < n - 1; ++i) { 
        if (li[i] > 1 && ld[i] > 1) { 
            ma=max(ma, li[i] + ld[i] - 1);
        }
    }
    return n - ma;
    }
};