class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>aa;
        sort(nums.begin(),nums.end());
        for(int i=1;i<=nums.size();i++)
        {
            if(!binary_search(begin(nums),end(nums),i)){
                aa.push_back(i);
            }
        }
        return aa;
    }
};