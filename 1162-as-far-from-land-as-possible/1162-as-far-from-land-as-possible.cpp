class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        queue<pair<int,int>> q;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]==1)
                {
                    q.push({i+1,j});
                    q.push({i-1,j});
                    q.push({i,j+1});
                    q.push({i,j-1});
                }
            }
        }
        int ans=0;
        while(!q.empty())
        {
            int size=q.size();
            ans++;
            for(int i=0; i<size; i++)
            {
                int a=q.front().first, b=q.front().second;
                q.pop();
                if(a>=0 && a<n && b>=0 && b<m && grid[a][b]==0)
                {
                    grid[a][b]=ans;
                    q.push({a+1,b});
                    q.push({a-1,b});
                    q.push({a,b+1});
                    q.push({a,b-1});
                }
            }
        }
        if(ans==1)
            return -1;
        else
            return ans-1;
    }
};