class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0,c1=0;
        for(int i:nums){
            if(c==0)c1=i;
            c+=(c1==i)?1:-1;
        }
        return c1;
    }
};