class Solution {
public:
    
    void dfs(vector<vector<int>>& grid, vector<vector<bool>> &vis, int i, int j, int &sum, int n, int m)
    {
        if(i>=0 && i<n && j>=0 && j<m && grid[i][j]==1 && !vis[i][j])
        {
            sum++;
            vis[i][j]=1;
            dfs(grid,vis,i+1,j,sum,n,m);
            dfs(grid,vis,i-1,j,sum,n,m);
            dfs(grid,vis,i,j-1,sum,n,m);
            dfs(grid,vis,i,j+1,sum,n,m);
        }
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<bool>> vis(n, vector<bool> (m,false));
        int ans=0,sum=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(!vis[i][j])
                {
                    sum=0;
                    dfs(grid,vis,i,j,sum,n,m);
                    ans=max(ans,sum);
                }
            }
        }
        return ans;
    }
};