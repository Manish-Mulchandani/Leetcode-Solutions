class Solution {
public:
    
    void dfs(int i, int j, vector<vector<bool>> &vis, vector<vector<int>> &A)
    {
        vis[i][j]=true;
        if(i+1>=0 && i+1<A.size() && j>=0 && j<A[0].size() && !vis[i+1][j] && A[i+1][j]>=A[i][j])
            dfs(i+1,j,vis,A);
        if(i-1>=0 && i-1<A.size() && j>=0 && j<A[0].size() && !vis[i-1][j] && A[i-1][j]>=A[i][j])
            dfs(i-1,j,vis,A);
        if(i>=0 && i<A.size() && j+1>=0 && j+1<A[0].size() && !vis[i][j+1] && A[i][j+1]>=A[i][j])
            dfs(i,j+1,vis,A);
        if(i>=0 && i<A.size() && j-1>=0 && j-1<A[0].size() && !vis[i][j-1] && A[i][j-1]>=A[i][j])
            dfs(i,j-1,vis,A);
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>> ans;
        int n=heights.size(), m=heights[0].size();
        vector<vector<bool>> v1(n, vector<bool> (m,false));
        vector<vector<bool>> v2(n, vector<bool> (m,false));
        for(int i=0; i<m; i++)
        {
            if(!v1[0][i])
                dfs(0,i,v1,heights);
            if(!v2[n-1][i])
                dfs(n-1,i,v2,heights);
        }
        for(int i=0; i<n; i++)
        {
            if(!v1[i][0])
                dfs(i,0,v1,heights);
            if(!v2[i][m-1])
                dfs(i,m-1,v2,heights);
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                //cout<<v1[i][j]<<" "<<v2[i][j]<<endl;
                if(v1[i][j] && v2[i][j])
                {
                    vector<int> B;
                    B.push_back(i);
                    B.push_back(j);
                    ans.push_back(B);
                }
            }
        }
        return ans;
    }
};