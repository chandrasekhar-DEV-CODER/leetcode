class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>a;
        for(int n:nums){
            if(n&1){
                a.push_back(n&~((n+1)&~n)>>1);
            }
            else{
                a.push_back(-1);
            }
        }
        return a;
    }
};