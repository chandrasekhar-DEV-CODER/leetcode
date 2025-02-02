class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long a=0,c;
        for(int i=1;i<=nums.size();i++){
            a+=i;
            c+=nums[i-1];
        }
        return abs(c-a);
    }
};