class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      vector<int>s(nums1.size(), -1);
      int c=0;
        for(int i=0;i<nums1.size();i++)
        {int j=0;
            while (j < nums2.size() && nums2[j] != nums1[i]) {
                j++;
            }
                if (j < nums2.size()) {
                for (int k = j + 1; k < nums2.size(); k++) {
                    if (nums2[k] > nums1[i]) {
                        s[c] = nums2[k]; 
                        break;
                    }
                }
            }
                c++;
            }
        return s;
    }
};