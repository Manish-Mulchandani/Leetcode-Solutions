class Solution {
public:
    
    void f(vector<int> &A, int k, vector<int> &B, int i, vector<vector<int>> &ans)
    {
        if(k<0)
            return ;
        
        if(i==A.size())
        {
            if(k==0)
                ans.push_back(B);
            return ;
        }
        B.push_back(A[i]);
        f(A,k-A[i], B, i,ans);
        //f(A,k, B, i+1,ans);
        B.pop_back();
        f(A,k,B, i+1,ans);
    }
    
    vector<vector<int>> combinationSum(vector<int>& A, int k) {
        vector<int> B;
        vector<vector<int>> ans;
        f(A,k,B,0,ans);
        return ans;
    }
};