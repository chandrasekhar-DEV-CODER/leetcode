class Solution {
public:
    int countTrapezoids(vector<vector<int>>& p) {
        const int M = 1e9 + 7;
        unordered_map<int, unordered_set<int>> g;
        for (auto& q : p) g[q[1]].insert(q[0]);

        vector<long long> v;
        for (auto& [y, s] : g) {
            int k = s.size();
            if (k >= 2) v.push_back(1LL * k * (k - 1) / 2);
        }

        long long r = 0, s = 0;
        for (auto x : v) {
            r = (r + s * x) % M;
            s = (s + x) % M;
        }

        return r;

    }
};