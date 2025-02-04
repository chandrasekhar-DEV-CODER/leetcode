class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        long long l=0,m=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                l=0;
            }
            else{
            l++;
            m=max(l,m);}
        }
        return m;
    }
};