class Solution {
public:
    int maxArea(vector<int>& h) {
        int l=0,r=h.size()-1;
        int m=INT_MIN;
        while(l<r){
            int m2=h[l],m1=h[r];
                int t=(m2>m1)?(m1*(r-l)):(m2*(r-l));
                m=max(m,t);
                if(h[l]<h[r]){
                    l++;
                }
                else{
                    r--;
                }
        }
        return m;
    }
};