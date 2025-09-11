class Solution {
public:
    bool isV(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

    string sortVowels(string s) {
        vector<char>a;
        for(char i:s){
            if(isV(i)){
                a.push_back(i);
            }
        }
        sort(a.begin(),a.end());
        string c="";
        int j=0;
         for(char i:s){
            if(isV(i)){
                c+=a[j];
                j++;
            }
            else{
                c+=i;
            }
        }
        return c;
    }
};