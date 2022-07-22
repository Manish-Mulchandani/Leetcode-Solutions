class Solution {
public:
    
    // M-II BFS
    int numIslands(vector<vector<char>>& grid) {
        int totalislands=0;
        int offsets[]={0,1,0,-1,0};
        int a,b;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]=='1')
                {
                    totalislands++;
                    grid[i][j]='2';
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    while(!q.empty())
                    {
                        auto p=q.front();
                        q.pop();
                        for(int k=0; k<4; k++)
                        {
                            a=p.first+offsets[k];
                            b=p.second+offsets[k+1];
                            if(a>=0 && a<grid.size() && b>=0 && b<grid[0].size() && grid[a][b]=='1')
                            {
                                grid[a][b]='2';
                                q.push({a,b});
                            }
                            
                        }
                    }
                }
            }
        }
        return totalislands;
    }
    
    // M-I DFS without a vis array
    /*void dfs(vector<vector<char>> &grid, int i, int j)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]!='1')
            return ;
        grid[i][j]='2';
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        // M-I DFS without a vis array
        int totalislands=0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]=='1')
                {
                    totalislands++;
                    dfs(grid,i,j);
                }
                    
            }
        }
        return totalislands;
    }*/
};