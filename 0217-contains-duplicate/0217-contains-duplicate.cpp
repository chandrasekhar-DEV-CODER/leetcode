class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>a;
        for(int i=0;i<nums.size();i++)
        {
            a.insert(nums[i]);
        }
        if(a.size()!=nums.size())
        {
            return true;
        }
        return false;
    }
};