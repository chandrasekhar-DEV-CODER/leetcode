class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
      int n = nums.size();
    unordered_set<string> numSet(nums.begin(), nums.end());
    
    // Generate all possible binary numbers of length n
    for (int i = 0; i < (1 << n); i++) {
        string candidate = "";
        for (int j = n - 1; j >= 0; j--) {
            candidate += ((i & (1 << j)) ? '1' : '0');
        }
        
        if (numSet.find(candidate) == numSet.end()) {
            return candidate;
        }
    }
    
    return "";   
    }
};