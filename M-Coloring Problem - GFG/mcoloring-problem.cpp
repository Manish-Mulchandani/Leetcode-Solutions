// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to determine if graph can be coloured with at most M colours such
// that no two adjacent vertices of graph are coloured with same colour.

bool isSafe(int c, int node, vector<int> &col, bool graph[101][101], int n)
{
    for(int i=0; i<n; i++)
    {
        if(i!=node && graph[node][i]==1 && col[i]==c)
            return false;
    }
    return true;
}

bool f(int node, int m, int n, vector<int> &col, bool graph[101][101])
{
    if(node==n)
        return true;
    for(int i=1; i<=m; i++)
    {
        if(isSafe(i,node,col, graph, n))
        {
            col[node]=i;
            if(f(node+1,m,n,col,graph))
                return true;
            col[node]=0;
        }
    }
    return false;
}

bool graphColoring(bool graph[101][101], int m, int n) {
    vector<int> col(n,0);
    if(f(0,m,n,col,graph))
        return true;
    return false;
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        cout << graphColoring(graph, m, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends