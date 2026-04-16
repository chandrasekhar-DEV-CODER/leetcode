class Solution {
public:
    int orangesRotting(vector<vector<int>>& g) {
        int d=0;
        int c=0,t=0;
        queue<pair<int,int>>a;
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
                if(g[i][j]!=0)t++;
                if(g[i][j]==2)a.push({i,j});
            }
        }
        int x[4]={0,0,1,-1},y[4]={1,-1,0,0};
        while(!a.empty()){
            int k=a.size();
            c+=k;
            while(k--){
                int f=a.front().first;
                int b=a.front().second;
                a.pop();
                for(int i=0;i<4;i++){
                    int ff=f+x[i];
                    int bb=b+y[i];
                    if(ff<0||bb<0 || ff>=g.size()|| bb>=g[0].size()|| g[ff][bb]!=1)continue;
                    g[ff][bb]=2;
                    a.push({ff,bb});
                }
            }
            if(!a.empty())d++;
        }
        return t==c?d:-1;
    }
};