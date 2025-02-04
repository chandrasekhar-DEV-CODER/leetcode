class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        long long l=0,re=0,r=arr.size()-1,m=0;
        for(int i=0;i<k;i++){
            l+=arr[i];
        }
        m=l;
        for(int i=k-1;i>=0;i--)
        {
            l-=arr[i];
            re+=arr[r];
            m=max(m,l+re);
            r--;
        }
        return m;
    }
};