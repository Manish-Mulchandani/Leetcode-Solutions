class Solution {
public:
    
    void f(vector<int> &nums, int k, vector<vector<int>> &ans, vector<int> &A, int i)
    {
        if(k==0)
        {
            ans.push_back(A);
            return ;
        }
        if(i==nums.size())
            return ;
        for(int j=i; j<nums.size(); j++)
        {
            if(nums[j]>k)
                return;
            if(i!=j && nums[j]==nums[j-1])
                continue;
            A.push_back(nums[j]);
            f(nums,k-nums[j], ans,A,j+1);
            A.pop_back();  
        }
            
    }
    
    vector<vector<int>> combinationSum2(vector<int>& nums, int k) {
        //One Brute force is to just use Combination sum with Sets
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        vector<int> A;
        f(nums,k,ans,A,0);
        return ans;
    }
};