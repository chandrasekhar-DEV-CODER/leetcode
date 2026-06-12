class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>>a;
        vector<int>s;
        b(c,t,0,a,0,s);
        return a;
    }
     void b(vector<int>& c, int t,int s1,vector<vector<int>>& a,int s2,vector<int> s){
     if(s2==t){a.push_back(s);
     return;}
     if(s1>=c.size() || s2>t)return;
      s.push_back(c[s1]);
      b(c,t,s1,a,s2+c[s1],s);
      s.pop_back();
      b(c,t,s1+1,a,s2,s);
     
     }
};