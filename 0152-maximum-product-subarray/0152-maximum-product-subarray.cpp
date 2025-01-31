class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n=arr.size();
        int a=1,b=1,an=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(a==0)a=1;
            if(b==0)b=1;
            a*=arr[i];
            b*=arr[n-i-1];
            an=max(an,max(a,b));
        }
        return an;
    }
};