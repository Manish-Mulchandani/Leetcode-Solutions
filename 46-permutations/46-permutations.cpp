class Solution {
public:
    /* M-II -- By swapping  */
    void f(vector<int> &nums,vector<vector<int>> &ans, int i)
    {
        if(i==nums.size())
        {
            ans.push_back(nums);
            return ;
        }
        for(int j=i; j<nums.size(); j++)
        {
            swap(nums[j], nums[i]);
            f(nums,ans,i+1);
            swap(nums[j], nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        //vector<int> A;
        f(nums,ans,0);
        return ans;
    }
    
    
    /* M_I  -- More space complexity
    void f(vector<int> &nums, vector<vector<int>> &ans, vector<int> &A, vector<bool> &B)
    {
        if(A.size()==nums.size())
        {
            ans.push_back(A);
            return ;
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(B[i]==false)
            {
                A.push_back(nums[i]);
                B[i]=true;
                f(nums,ans,A,B);
                B[i]=false;
                A.pop_back();
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> A;
        vector<bool> B(nums.size(),false);
        f(nums,ans,A,B);
        return ans;
    }*/
};