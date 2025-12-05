class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int c=0,r=0;
        for(int i=0;i<nums.size();i++){
            c+=nums[i];
        }
        int t=0;
        for(int i=0;i<nums.size()-1;i++){
            t+=nums[i];
            c-=nums[i];
            if(abs(c-t)%2==0)r++;
        }
        return r;
    }
};