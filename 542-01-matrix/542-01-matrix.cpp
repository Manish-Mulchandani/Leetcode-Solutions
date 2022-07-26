class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size(), m=mat[0].size();
        vector<vector<int>> dir={{1,0},{0,1},{-1,0},{0,-1}};
        vector<vector<int>> ans(n,vector<int> (m,-1));
        queue<pair<int,int>> q;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(mat[i][j]==0)
                {
                    ans[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        while(!q.empty())
        {
            auto c=q.front();
            q.pop();
            for(auto &i:dir)
            {
                int a=c.first+i[0], b=c.second+i[1];
                if(a>=0 && a<n && b>=0 && b<m && ans[a][b]==-1)
                {
                    q.push({a,b});
                    ans[a][b]=ans[c.first][c.second]+1;
                }
            }
            
        }
        return ans;
    }
};