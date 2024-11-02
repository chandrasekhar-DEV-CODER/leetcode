class Solution {
public:
    bool isCircularSentence(string arr) {
        int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (i < n - 1 && arr[i + 1] == ' ') {
            if (i + 2 < n && arr[i] != arr[i + 2]) {
                return false;
            }
        }
    }
    if (arr[n - 1] != arr[0]) {
        return false;
    }
    return true;
    }
};