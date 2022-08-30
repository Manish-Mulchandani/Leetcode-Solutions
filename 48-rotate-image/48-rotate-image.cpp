class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int t1,t2,a,b,c;
        for(int i=0; i<n/2; i++)
        {
            for(int j=i; j<n-1-i; j++)
            {
                t1=matrix[i][j];
                a=i;
                b=j;
                for(int k=0; k<4; k++)
                {
                    c=b;
                    b=n-1-a;
                    a=c;
                    t2=matrix[a][b];
                    matrix[a][b]=t1;
                    t1=t2;
                }
            }
        }
        
    }
};