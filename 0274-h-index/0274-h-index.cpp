class Solution {
public:
    int hIndex(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>=arr.size()-i)
            {
                return arr.size()-i;
            }
        }
        return 0;
    }
};