class Solution {
public:
    int minimizedMaximum(int n, vector<int>& arr) {
       
         int left = 1, right = *max_element(arr.begin(), arr.end());
    int answer = right;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        int requiredStores = 0;
        for (int quantity : arr) {
            requiredStores += (quantity + mid - 1) / mid; 
        }

        if (requiredStores <= n) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1; 
        }
    }

    return answer;
    }
};