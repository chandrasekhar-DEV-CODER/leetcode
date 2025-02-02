class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        long long e=0,o=1;
        vector<int>a(nums.size());
        for(int i=0;i<nums.size();i++)
        {if(nums[i]>0){
            a[e]=nums[i];
            e+=2;
        }
            else{
                a[o]=nums[i];
                o+=2;
            }
        }
        return a;
    }
};