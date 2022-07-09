// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++



class Solution{
    public:
    
    void f(vector<vector<int>> &m, int n, int i, int j, string &A, vector<string> &ans, vector<vector<int>> &vis)
    {
        if(i==n-1 && j==n-1)
        {
            ans.push_back(A);
            return ;
        }
        // Downward
        if(i+1<n && m[i+1][j]==1 && vis[i+1][j]==0)
        {
            vis[i][j]=1;
            A.push_back('D');
            f(m,n,i+1,j,A,ans,vis);
            A.pop_back();
            vis[i][j]=0;
        }
        // Left
        if(j-1>=0 && m[i][j-1]==1 && vis[i][j-1]==0)
        {
            vis[i][j]=1;
            A.push_back('L');
            f(m,n,i,j-1,A,ans,vis);
            A.pop_back();
            vis[i][j]=0;
        }
        // Right
        if(j+1<n && m[i][j+1]==1 && vis[i][j+1]==0)
        {
            vis[i][j]=1;
            A.push_back('R');
            f(m,n,i,j+1,A,ans,vis);
            A.pop_back();
            vis[i][j]=0;
        }
        // Up
        if(i-1>=0 && m[i-1][j]==1 && vis[i-1][j]==0)
        {
            vis[i][j]=1;
            A.push_back('U');
            f(m,n,i-1,j,A,ans,vis);
            A.pop_back();
            vis[i][j]=0;
        }
        
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        string A="";
        vector<vector<int>> vis(n,vector<int> (n,0));
        
        if(m[0][0]==1 && m[n-1][n-1]==1)
            f(m,n,0,0,A,ans,vis);
        return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends