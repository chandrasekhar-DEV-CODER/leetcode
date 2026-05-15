class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        vector<vector<int>>a(n);
        vector<int>d(n,0);
        for(auto& i:p){
            a[i[1]].push_back(i[0]);
            d[i[0]]++;
        }
        vector<int>q;
        vector<int>aa;
        for(int i=0;i<n;i++){
            if(!d[i]){q.push_back(i);}
        }
        int ans=0;
        for(int i=0;i<q.size();i++){
            int u=q[i];
            ans++;
            for(auto& j:a[u]){
                d[j]--;
                 if(!d[j]){q.push_back(j);}
            }
        }
        return ans == n ? q : vector<int>{};
    }
};