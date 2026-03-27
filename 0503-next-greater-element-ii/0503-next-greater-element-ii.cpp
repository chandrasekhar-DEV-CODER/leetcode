class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>a;
        vector<int>r(nums.size());
        for(int i=2*nums.size();i>=0;i--){
            int j=i%nums.size();
            int c=nums[j];
            while(!a.empty()&&a.top()<=c)a.pop();
            if(a.empty())r[j]=-1;
            else r[j]=a.top();
            a.push(nums[j]);
        }
        return r;
    }
};