class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int, int> m; 
        m[0]=1;
        int p=0,c=0;
        for(int i=0;i<nums.size();i++)
        {
            p+=nums[i];
            int s=p-k;
            c+=m[s];
            m[p]+=1;
        }
        return c;

    }
};