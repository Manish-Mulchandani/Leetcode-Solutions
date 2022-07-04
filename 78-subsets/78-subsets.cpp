class Solution {
public:
    // M-II Bitmasking
    /*vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<vector<int>> ans;
        int n=nums.size();
        int cnt=1<<n;    // 2^n  number of subsets
        for(int i=0; i<cnt; i++)
        {
            vector<int> s;
            for(int j=0; j<n; j++)
            {
                if((i & (1<<j))!=0)
                {
                    s.push_back(nums[j]);
                }
            }
            ans.push_back(s);
        }
        return ans;
    }*/
    
    // Trying Recursion another time
    static void add(int i,int n, vector<int>& nums, vector<vector<int>> &ans, vector<int> &A)
    {
        if(i==n)
        {
            ans.push_back(A);
            return ;
        }
        A.push_back(nums[i]);
        add(i+1,n,nums,ans,A);
        A.pop_back();
        add(i+1,n,nums,ans,A);
    }
    
        
    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<vector<int>> ans;
        vector<int> A;
        int n=nums.size();
        add(0,n,nums,ans,A);
        return ans;
    }
    
    
    
    
    /* M=I :- Recursion
    
    static void get(int i, vector<vector<int>> &A, vector<int>& nums, int n, vector<int>& B)
    {
        if(i==n)
        {
            A.push_back(B);
            return;
        }
        B.push_back(nums[i]);
        get(i+1,A,nums,n,B);
        B.pop_back();
        get(i+1,A,nums,n,B);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> A;
        vector<int> B;
        int n=nums.size();
        get(0,A,nums,n,B);
        return A;
    }*/
};