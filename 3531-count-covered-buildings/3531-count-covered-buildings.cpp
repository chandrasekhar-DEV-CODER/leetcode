class Solution {
public:
int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
     unordered_map<int, set<int>> rB, cB;
        for (auto& b : buildings) {
            int x = b[0], y = b[1];
            rB[x].insert(y);
            cB[y].insert(x);
        }

        int cnt = 0;
        for (auto& b : buildings) {
            int x = b[0], y = b[1];
            auto& r = rB[x];
            auto& c = cB[y];

            auto it_r = r.find(y);
            auto it_c = c.find(x);

            bool l = (it_r != r.begin());
            bool ri = (next(it_r) != r.end());
            bool u = (it_c != c.begin());
            bool d = (next(it_c) != c.end());

            if (l && ri && u && d) cnt++;
        }
        return cnt;
}
};