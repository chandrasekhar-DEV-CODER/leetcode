class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>a;
        for(int i=0;i<nums.size();i++)
        {
            if(a.find(nums[i])!=a.end())
            {
                return nums[i];
                break;
            }        
            a.insert(nums[i]);        }
        return -1;
    }
};