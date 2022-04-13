class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> A(n, vector<int> (n));
        int a=1;
        int u=0, d=n-1, l=0,r=n-1;
        while(u<=d && l<=r)
        {
            for(int i=l ; i<=r; i++)
            {
                A[u][i]=a++;
            }
            for(int i=u+1; i<=d; i++)
                A[i][r]=a++;
            if(u<d && l<r)
            {
                for(int i=r-1; i>l; i--)
                    A[d][i]=a++;
                for(int i=d; i>u; i--)
                    A[i][l]=a++;
            }
            u++;
            d--;
            l++;
            r--;
        }
        return A;
    }
};