class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int a=0,m=0;
        for(int i:nums){
            if(m==0){
                a=i;
            }
            m+=i==a?1:-1;
        }
        return a;
    }
};