class Solution {
public:
    int countPermutations(vector<int>& co) {
        if(*min_element(co.begin()+1,co.end())<=co[0]){return 0;}
        int mod=1000000007;
        int ans=1;
        for(int i=2;i<co.size();i++){
            ans=static_cast<long long>(ans)*i%mod;
        }
        return ans;
    }
};