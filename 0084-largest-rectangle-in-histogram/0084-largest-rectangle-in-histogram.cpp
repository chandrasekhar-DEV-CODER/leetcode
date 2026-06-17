class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int>s;
        s.push(-1);
        int m=0;
        for(int i=0;i<h.size();i++){
            while(s.top()!=-1 && h[i]<=h[s.top()]){
                int hi=h[s.top()];
                s.pop();
                int w=i-s.top()-1;
                m=max(m,hi*w);
            }
            s.push(i);
        }
        while(s.top()!=-1){
            int hi=h[s.top()];
            s.pop();
            int w=h.size()-s.top()-1;
            m=max(m,hi*w);
        }
        return m;
    }
};