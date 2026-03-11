class Solution {
public:
    
int maximumSum(vector<int>& arr) {
    int n = arr.size();
    if (n == 1) return arr[0];
    vector<int> notIgnored(n);
    vector<int> ignored(n);

    notIgnored[0] = arr[0];
    ignored[0] = -1e9; 

    int maxSum = arr[0];

    for (int i = 1; i < n; i++) {
        notIgnored[i] = max(arr[i], notIgnored[i - 1] + arr[i]);
        ignored[i] = max(notIgnored[i - 1], ignored[i - 1] + arr[i]);

        maxSum = max({maxSum, notIgnored[i], ignored[i]});
    }

    return maxSum;
}
};