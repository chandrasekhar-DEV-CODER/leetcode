class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>f;
        int c= 0;
        for (int num : nums) {
            int v= k - num;
            if (f[v] > 0) {
                c++;
                f[v]--;
            } else {
                f[num]++;
            }
        }
        return c;
    }
};