class Solution {
public:
    string reverseWords(string s) {
        string r = "", word = "";
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                if (!word.empty()) {
                    r += word + " ";
                    word = "";
                }
            } else {
                word = s[i] + word;
            }
        }
        if (!word.empty()) {
            r += word;
        } else if (!r.empty()) {
            r.pop_back(); // remove trailing space
        }
        return r;
    }
};