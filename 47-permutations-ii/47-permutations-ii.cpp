class Solution {
public:
    
    void f(vector<int> &nums, vector<vector<int>> &ans,vector<int> &A, vector<bool> &B)
    {
        if(A.size()==nums.size())
        {
            ans.push_back(A);
            return ;
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(B[i])
                continue;
            if(i && nums[i]==nums[i-1] && !B[i-1])
                continue;
            B[i]=true;
            A.push_back(nums[i]);
            f(nums,ans,A,B);
            A.pop_back();
            B[i]=false;
        }
    }
    
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> A;
        vector<bool> B(nums.size(),false);
        f(nums,ans,A,B);
        return ans;
    }
};