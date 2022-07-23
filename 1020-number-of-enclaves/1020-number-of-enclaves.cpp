class Solution {
public:
    
    void dfs(vector<vector<int>> &grid, int i, int j)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]!=1)
            return ;
        grid[i][j]=2;
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size(),ans=0;
        for(int i=0; i<n; i++)
        {
            if(grid[i][0]==1)
                dfs(grid,i,0);
            if(grid[i][m-1]==1)
                dfs(grid,i,m-1);
        }
        for(int i=0; i<m; i++)
        {
            if(grid[0][i]==1)
                dfs(grid,0,i);
            if(grid[n-1][i]==1)
                dfs(grid,n-1,i);
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]==1)
                    ans++;
            }
        }
        return ans;
    }
};