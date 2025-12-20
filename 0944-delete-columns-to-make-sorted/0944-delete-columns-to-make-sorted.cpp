class Solution {
public:
    int minDeletionSize(vector<string>& str) {
        int c=0;

        for(int j=0; j<str[0].size();j++){
    for (int i=0; i<str.size()-1; i++){
        if(str[i][j]>str[i+1][j]){
            c++;
            break;
        }
    }
}
return c;
    }
};