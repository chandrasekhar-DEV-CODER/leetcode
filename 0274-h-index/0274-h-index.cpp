class Solution {
public:
    int hIndex(vector<int>& c) {
        sort(c.begin(),c.end());
        for(int i=0;i<c.size();i++){
            if(c[i]>=c.size()-i){
                return c.size()-i;
            }
        }
        return 0;
    }
};