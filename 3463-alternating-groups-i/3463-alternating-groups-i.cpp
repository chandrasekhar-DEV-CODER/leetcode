class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int c=0;
        int n = colors.size();
        for(int i=0;i<n;i++)
        {
            int l=(i-1+n)%n;
            int r=(i+1)%n;
            if(colors[i]!=colors[l] && colors[i]!=colors[r])
            {
                c++;
            }
        }
        return c;

    }
};