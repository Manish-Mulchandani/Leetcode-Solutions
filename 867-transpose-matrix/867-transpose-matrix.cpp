class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=matrix.size(), m=matrix[0].size();
        vector<vector<int>> ans;
        vector<int> A;
        for(int i=0; i<m; i++)
        {
            A.clear();
            for(int j=0; j<n; j++)
            {
                A.push_back(matrix[j][i]);
            }
            ans.push_back(A);
        }
        return ans;
    }
};