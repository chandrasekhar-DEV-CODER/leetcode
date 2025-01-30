class Solution {
public:
    int maxProfit(vector<int>& a) {
        int mi=INT_MAX;
        int ma=INT_MIN;
        for(int i=0;i<a.size();i++){
            mi=min(a[i],mi);
            ma=max(ma,a[i]-mi);
        }
        return ma;
    }
};