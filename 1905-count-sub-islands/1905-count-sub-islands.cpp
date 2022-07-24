class Solution {
public:
    
    bool dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j)
    {
        if(i<0 || i>=grid1.size() || j<0 || j>=grid2[0].size() || grid2[i][j]!=1)
            return true;
        if(grid1[i][j]!=1)
            return false;
        bool a,b,c,d;
        grid2[i][j]=0;
        a=dfs(grid1,grid2,i+1,j);
        b=dfs(grid1,grid2,i-1,j);
        c=dfs(grid1,grid2,i,j+1);
        d=dfs(grid1,grid2,i,j-1);
        return (a&&b&&c&&d);
    }
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n=grid2.size(),m=grid2[0].size();
        int ans=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid2[i][j]==1)
                {
                    if(dfs(grid1,grid2,i,j))
                        ans++;
                }
            }
        }
        return ans;
    }
};