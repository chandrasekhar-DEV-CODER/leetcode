class Solution {
public:
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums.begin(), nums.end());
    }

private:
    int mergeSort(vector<int>::iterator low, vector<int>::iterator high) {
        if (high - low <= 1) return 0;
        
        auto mid = low + (high - low) / 2;
        int count = mergeSort(low, mid) + mergeSort(mid, high);
        
        for (auto i = low, j = mid; i < mid; ++i) {
            while (j < high && *i > 2LL * *j) j++;
            count += (j - mid);
        }
        inplace_merge(low, mid, high); 
        return count;
    }
};
