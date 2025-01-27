class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>a;;
        unordered_map<string,vector<string>>h;
        for(int i=0;i<strs.size();i++)
        {
            string aa=strs[i];
            sort(aa.begin(),aa.end());
            h[aa].push_back(strs[i]);

        }
        vector<vector<string>>res;
        for(auto &i:h)
        {
            res.push_back(i.second);
        }
        return res;
    }
};