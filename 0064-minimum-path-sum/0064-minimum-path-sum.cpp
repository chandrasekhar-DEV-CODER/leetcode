class Solution {
public:
    int f(int i,int j,vector<vector<int>>& g,vector<vector<int>>d){
        if(i==0&&j==0)return g[i][j];
        if(i<0||j<0)return 1e9;
        if(d[i][j]!=-1)return d[i][j];
        int up=g[i][j]+f(i-1,j,g,d);
        int down=g[i][j]+f(i,j-1,g,d);
        return d[i][j]=min(up,down);
    }
    int minPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> dp(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (i == 0 && j == 0)
                    dp[i][j] = matrix[i][j];
                else {
                    int up = matrix[i][j];
                    if (i > 0) up += dp[i - 1][j];
                    else up += 1e9;
                    int left = matrix[i][j];
                    if (j > 0) left += dp[i][j - 1];
                    else left += 1e9;
                    dp[i][j] = min(up, left);
                }
            }
        }

        return dp[n - 1][m - 1];
    }
};