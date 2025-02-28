#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int c = 0, maxScore = 0;
        sort(tokens.begin(), tokens.end());
        int l = 0, r = tokens.size() - 1;
        while (l <= r) {
            if (power >= tokens[l]) {  
                power -= tokens[l];
                c++;
                maxScore = max(maxScore, c); 
                l++;
            } else if (c > 0) { 
                power += tokens[r];
                c--;
                r--;
            } else {  
                break;
            }
        }
        
        return maxScore;
    }
};
