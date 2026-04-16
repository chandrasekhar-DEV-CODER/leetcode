class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& img, int sr, int sc, int co) {
        queue<pair<int,int>>a;
        int st = img[sr][sc];
        vector<vector<int>>im=img;
        if(im[sr][sc]==co)return im;
        im[sr][sc]=co;
        a.push({sr,sc});
        
                int x[4]={0,0,1,-1};
                int y[4]={1,-1,0,0};
        while(!a.empty()){
                int f=a.front().first;
                int b=a.front().second;
                a.pop();
                for(int i=0;i<4;i++){
                    int ff=f+x[i];
                    int bb=b+y[i];
                    if(ff>=0&&bb>=0 && ff<im.size()&& bb < im[0].size()&& im[ff][bb]==st){
                    im[ff][bb]=co;
                    a.push({ff,bb});}
                }
        }
        return im;
    }
};