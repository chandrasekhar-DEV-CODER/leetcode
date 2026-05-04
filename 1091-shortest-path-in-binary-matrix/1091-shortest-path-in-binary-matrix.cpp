class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& g) {
        if(g[0][0]==1 || g[g.size()-1][g.size()-1])return -1;
        int n = g.size();
        queue<pair<int,int>>q;
        int dirs[8][2] = {{-1,-1}, {-1,0}, {-1,1}, {0,-1}, {0,1}, {1,-1}, {1,0}, {1,1}};

        q.push({0,0});
        g[0][0]=1;
        while(!q.empty()){
            auto [r,c]=q.front();
            int d=g[r][c];
            q.pop();
            if (r == n - 1 && c == n - 1) return d;

            for(auto& i:dirs){
                int rr=r+i[0];
                int cc=c+i[1];
                if(rr>=0&&rr<g.size() && cc>=0&&cc<g.size() && g[rr][cc]==0){
                    g[rr][cc]=d+1;
                    q.push({rr,cc});
                }
            }

        }
        return -1;
    }
};