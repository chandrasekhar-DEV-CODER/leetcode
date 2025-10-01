class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int c=0;
        int r=0,l=0;
        while(r<g.size() && l<s.size()){
            if(s[l]>=g[r]){
                c++;
                l++;
                r++;
            }
            else{
                l++;
            }
        }
        return c;
    }
};