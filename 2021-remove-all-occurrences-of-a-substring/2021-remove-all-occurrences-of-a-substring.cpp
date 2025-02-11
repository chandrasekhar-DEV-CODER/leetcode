class Solution {
public:
    string removeOccurrences(string s, string p) {
        string sa;
        for(int i=0;i<s.size();i++)
        {
            sa.push_back(s[i]);
            if(sa.size()>=p.size() && sa.substr(sa.size()-p.size())==p){
                sa.erase(sa.size()-p.size(),p.size());
            }
        }
        return sa;
    }
};