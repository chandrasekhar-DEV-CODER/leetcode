class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& ne) {
        int n=in.size(),i=0;
        vector<vector<int>>res;
        while(i<n && in[i][1]<ne[0]){
            res.push_back(in[i]);
            i++;
        }
        while(i<n && ne[1]>=in[i][0]){
            ne[0]=min(ne[0],in[i][0]);
            ne[1]=max(ne[1],in[i][1]);
            i++;
        }
        res.push_back(ne);
        while(i<n){
            res.push_back(in[i]);
            i++;
        }
        return res;
    }
};