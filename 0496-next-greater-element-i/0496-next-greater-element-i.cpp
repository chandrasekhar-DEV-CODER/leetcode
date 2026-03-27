class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> a;
        vector<int> s(nums2.size());
        vector<int> r(nums1.size());
        
        for(int i = nums2.size() - 1; i >= 0; i--) {
            while(!a.empty() && a.top() <= nums2[i]) {
                a.pop();
            }
            if(a.empty()) s[i] = -1;
            else s[i] = a.top();
            a.push(nums2[i]); 
        }
        
        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {
                if(nums1[i] == nums2[j]) {     
                    r[i] = s[j];               
                    break;                      
                }
            }
        }
        return r;
    }
};
