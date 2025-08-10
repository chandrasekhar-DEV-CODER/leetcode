class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char,int>a;
        unordered_map<char,int>b;
        for(char i:r){
            a[i]++;
        }
        for(char i:m){
            if(a.find(i)!=a.end()){
                a[i]--;
                if(a[i]==0)a.erase(i);
                if(a.size()==0)return true;
            }
        }
        return false;
    }
};