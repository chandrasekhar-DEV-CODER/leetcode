class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>a;
        for(int i=1;i<=n/2;i++){
            a.push_back(i);
            a.push_back(-i);
        }
        if(n%2==1){
            a.push_back(0);
        }
        return a;
    }
};