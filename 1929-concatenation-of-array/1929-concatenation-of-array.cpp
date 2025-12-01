class Solution {
public:
    vector<int> getConcatenation(vector<int>& n) {
        vector<int>a;
        for(int i:n)a.push_back(i);
        for(int i:n)a.push_back(i);
        return a;
    }
};