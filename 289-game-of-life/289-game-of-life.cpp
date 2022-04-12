class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size(),m=board[0].size();
        int cnt=0;
        vector<vector<int>> nw=board;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cnt=0;
                for(int k=i-1; k<=i+1; k++)
                {
                    for(int l=j-1; l<=j+1; l++)
                    {
                        if(k<0 || k>=n || l<0 || l>=m)
                            continue;
                        if(k==i && l==j)
                            continue;
                        if(nw[k][l])
                            cnt++;
                    }
                }
                //cout<<cnt<<endl;
                if(board[i][j])
                {
                    if(cnt<2 || cnt>3)
                        board[i][j]=0;
                }
                else
                {
                    if(cnt==3)
                        board[i][j]=1;
                }
            }
        }
    }
};