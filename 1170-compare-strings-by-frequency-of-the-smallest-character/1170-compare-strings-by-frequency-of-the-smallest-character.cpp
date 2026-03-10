class Solution {
public:
    int f(string s) {
        char minChar = 'z' + 1;
        int count = 0;
        for (char c : s) {
            if (c < minChar) {
                minChar = c;
                count = 1;
            } else if (c == minChar) {
                count++;
            }
        }
        return count;
    }

    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> qFreq, wFreq;
        
        for (string& s : queries) qFreq.push_back(f(s));
        for (string& s : words) wFreq.push_back(f(s));
        sort(wFreq.begin(), wFreq.end());

        vector<int> result;
        for (int q : qFreq) {
            int count = wFreq.end() - upper_bound(wFreq.begin(), wFreq.end(), q);
            result.push_back(count);
        }
        
        return result;
    }
};
