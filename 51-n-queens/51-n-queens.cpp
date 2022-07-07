class Solution {
public:
    
    /* M-II   In this we use hashing to remove the extra time complexity*/
    
    void f(vector<vector<string>> &ans, vector<string> &A, int row, int n, vector<int> &C, vector<int> &D, vector<int> &E)
    {
        if(row==n)
        {
            ans.push_back(A);
            return ;
        }
        for(int i=0; i<n; i++)
        {
            if(C[i]==0 && D[row+i]==0 && E[n-1+row-i]==0)
            {
                C[i]=1;
                D[row+i]=1;
                E[n-1+row-i]=1;
                A[row][i]='Q';
                f(ans,A,row+1,n,C,D,E);
                A[row][i]='.';
                C[i]=0;
                D[row+i]=0;
                E[n-1+row-i]=0;
            }
        }
    }
    
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> A(n);
        string s(n,'.');
        for(int i=0; i<n; i++)
            A[i]=s;
        vector<int> C(n,0);
        vector<int> D(2*n-1,0);
        vector<int> E(2*n-1,0);
        f(ans,A,0,n,C,D,E);
        return ans;
    } 
    
    
    
    /* M-I   In this the check fn has a little more time complexity 3n
    bool check(int row, int col, vector<string> &A, int n)
    {
        for(int i=0; i<row; i++)
        {
            if(A[i][col]=='Q')
                return false;
        }
        int r1=row-1,c1=col-1;
        while(r1>=0 && c1>=0)
        {
            if(A[r1][c1]=='Q')
                return false;
            r1--;
            c1--;
        }
        r1=row-1;
        c1=col+1;
        while(r1>=0 && c1<n)
        {
            if(A[r1][c1]=='Q')
                return false;
            r1--;
            c1++;
        }
        return true;
        
    }
    
    void f(vector<vector<string>> &ans, vector<string> &A, int row, int n)
    {
        if(row==n)
        {
            ans.push_back(A);
            return ;
        }
        for(int i=0; i<n; i++)
        {
            if(check(row,i,A,n))
            {
                A[row][i]='Q';
                f(ans,A,row+1,n);
                A[row][i]='.';
            }
        }
        
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> A(n);
        string s(n,'.');
        for(int i=0; i<n; i++)
            A[i]=s;
        f(ans,A,0,n);
        return ans;
    }*/
};