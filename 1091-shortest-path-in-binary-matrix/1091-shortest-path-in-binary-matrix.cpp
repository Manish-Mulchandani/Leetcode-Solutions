class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0]==1 || grid[n-1][n-1]==1)
            return -1;
        queue<pair<int,int>> q;
        grid[0][0]=1;
        q.push({0,0});
        while(!q.empty())
        {
            auto c=q.front();
            q.pop();
            int a=c.first, b=c.second;
            if(a==n-1 && b==n-1)
                return grid[a][b];
            for(int i=-1; i<2; i++)
            {
                for(int j=-1; j<2; j++)
                {
                    if(i==0 && j==0)
                        continue;
                    if((a+i)>=0 && (a+i)<n && (b+j)>=0 && (b+j)<n && grid[a+i][b+j]==0)
                    {
                        grid[a+i][b+j]=grid[a][b]+1;
                        q.push({a+i, b+j});
                    }
                    
                }
            }
            
        }
        return -1;
        
    }
};