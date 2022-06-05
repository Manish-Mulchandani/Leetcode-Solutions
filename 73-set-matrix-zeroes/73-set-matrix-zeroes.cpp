class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int flag=0;
        set<int> A,B;
        for(int i=0; i<matrix.size(); i++)
        {
            flag=0;
            for(int j=0; j<matrix[0].size(); j++)
            {
                if(matrix[i][j]==0)
                {
                    A.insert(i);
                    B.insert(j);
                }
            }
        }
        for(auto &i:A)
        {
            for(int j=0; j<matrix[0].size(); j++)
            {
                matrix[i][j]=0;
            }
        }
        for(auto &i:B)
        {
            for(int j=0; j<matrix.size(); j++)
            {
                matrix[j][i]=0;
            }
        }
    }
};