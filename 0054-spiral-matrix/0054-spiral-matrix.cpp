class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) { 
        if (matrix.empty()) return {};

        int t = 0, l = 0;
        int b = matrix.size() - 1;  // Fix: Number of rows - 1
        int r = matrix[0].size() - 1;
        vector<int>a;
        while(t<=b && l<=r){
            for(int i=l;i<=r;i++)
            {
                a.push_back(matrix[t][i]);
            }
            t++;
            for(int i=t;i<=b;i++)
            {
                a.push_back(matrix[i][r]);
            }
            r--;
            if(t<=b){
                for(int i=r;i>=l;i--){
                    a.push_back(matrix[b][i]);
                }
                b--;
            }
            if(l<=r){
                for(int i=b;i>=t;i--){
                    a.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        return a;
    }
};