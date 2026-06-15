class Solution {
public:
int r=0,e=1;
 void d(vector<vector<int>>& grid,int a,int b,int c){
    if (a < 0 || a >= grid.size() || b < 0 || b >= grid[0].size() || grid[a][b] == -1) return;
    if(grid[a][b]==2){
        if(e==c)r++;
        return;
    }
    grid[a][b]=-1;
    d(grid,a+1,b,c+1);
    d(grid,a-1,b,c+1);
    d(grid,a,b+1,c+1);
    d(grid,a,b-1,c+1);
    grid[a][b]=0;

 }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int a,b;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1)a=i,b=j;
                else if(grid[i][j]==0)e++;
            }

        }
        d(grid,a,b,0);
        return r;

    }
};