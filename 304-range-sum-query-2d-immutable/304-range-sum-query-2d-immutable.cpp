class NumMatrix {
public:
    int A[250][250]={0};
    NumMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0; i<n; i++)
        {
            for(int j=1; j<m; j++)
            {
                matrix[i][j]+=matrix[i][j-1];
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                A[i][j]=matrix[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        for(int i=row1; i<=row2; i++)
        {
            if(col1==0)
            {
                sum+=A[i][col2];
            }
            else
            {
                sum+=(A[i][col2]-A[i][col1-1]);
            }
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */