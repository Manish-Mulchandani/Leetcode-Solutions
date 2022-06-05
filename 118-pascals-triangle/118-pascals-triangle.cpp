class Solution {
public:
    vector<vector<int>> generate(int num) {
        vector<vector<int>> A(num);
        for(int i=0; i<num; i++)
        {
            A[i].resize(i+1);
            A[i][0]=1;
            A[i][i]=1;
            for(int j=1; j<i; j++)
            {
                A[i][j]=A[i-1][j-1]+A[i-1][j];
            }
        }
        return A;
    }
};