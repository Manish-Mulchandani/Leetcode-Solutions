class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        for(int i=n-1; i>=0; i--)
        {
            vector<int> A;
            int k=i;
            for(int j=0; j<m; j++)
            {
                if(k>=n)
                    break;
                A.push_back(mat[k][j]);
                k++;
            }
            sort(A.begin(), A.end());
            k=i;
            for(int j=0; j<m; j++)
            {
                if(k>=n)
                    break;
                mat[k][j]=A[j];
                k++;
            }
        }
        for(int j=1; j<m; j++)
        {
            vector<int> A;
            int k=j;
            for(int i=0; i<n; i++)
            {
                if(k>=m)
                    break;
                A.push_back(mat[i][k]);
                k++;
            }
            sort(A.begin(), A.end());
            k=j;
            for(int i=0; i<n; i++)
            {
                if(k>=m)
                    break;
                mat[i][k]=A[i];
                k++;
            }
        }
        return mat;
    }
};