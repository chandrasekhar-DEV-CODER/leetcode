class Solution {
public:
    int distanceBetweenBusStops(vector<int>& di, int s, int d) {
        int a=0;
        int b=0;
        int i=s,j=s;
        while(d!=i){
            a+=di[i];
            i++;
            i%=di.size();
        }
        while(d!=j){
           int prev = (j - 1 + di.size()) % di.size(); // safe backward step
            b += di[prev];
            j = prev;
        
        }
        return min(a,b);
    }
};