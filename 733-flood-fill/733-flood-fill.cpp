class Solution {
public:
    
    void dfs(vector<vector<int>> &image, int sr, int sc, int nc, int old)
    {
        if(sr<0 || sr>=image.size() || sc<0 || sc>=image[0].size() || image[sr][sc]!=old)
            return ;
        image[sr][sc]=nc;
        dfs(image,sr-1,sc,nc,old);
        dfs(image,sr,sc+1,nc,old);
        dfs(image,sr,sc-1,nc,old);
        dfs(image,sr+1,sc,nc,old);
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int nc) {
        int old=image[sr][sc];
        if(old==nc)
            return image;
        dfs(image,sr,sc,nc,old);
        return image;
    }
};