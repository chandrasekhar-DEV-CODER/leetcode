class Solution {
public:
     int closetTarget(vector<string>& w, string t, int s) {
        int n = w.size(), m = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (w[i] == t) {
                int d1 = abs(i - s);
                int d2 = n - d1;
                m = min(m, min(d1, d2));
            }
        }
        return m == INT_MAX ? -1 : m;
    }
};