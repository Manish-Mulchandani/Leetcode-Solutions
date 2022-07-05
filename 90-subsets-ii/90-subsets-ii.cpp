class Solution {
public:
    
    void f(vector<int> &nums, vector<vector<int>> &ans, vector<int> &A, int i)
    {
        int n=nums.size();
        
        ans.push_back(A);
        if(i==n)
            return ;
        for(int j=i; j<n; j++)
        {
            if(j>i && nums[j]==nums[j-1])
                continue;
            A.push_back(nums[j]);
            f(nums,ans,A,j+1);
            A.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        vector<int> A;
        f(nums,ans,A,0);
        return ans;
    }
};