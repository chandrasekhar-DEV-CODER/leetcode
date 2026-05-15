class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<vector<int>>a(n);
        vector<int>b(n,0);
        for(auto& i:p){
            a[i[1]].push_back(i[0]);
            b[i[0]]++;
        }
        vector<int>q;
        for(int i=0;i<n;i++){
            if(!b[i])q.push_back(i);
        }
        int ans=0;
        for(int i=0;i<q.size();i++){
            int u=q[i];
            ans++;
            for(int j:a[u]){
                b[j]--;
                if(!b[j])q.push_back(j);
            }
        }
        return ans==n;
    }
};