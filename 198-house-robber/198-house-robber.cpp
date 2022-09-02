class Solution {
public:
    /*M-V Very optimized
    int rob(vector<int>& nums) {
        int a=0,b=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(i%2)
            {
                a=max(a+nums[i], b);
            }
            else
            {
                b=max(b+nums[i], a);
            }
        }
        return max(a,b);
    }*/
    
    /*M-III*/
    int rob(vector<int> &nums){
        int n=nums.size();
        vector<int> dp(n,-1);
        dp[0]=nums[0];
        int take,nottake;
        for(int i=1; i<n; i++)
        {
            take=nums[i];
            if(i>1)
                take+=dp[i-2];
            nottake=dp[i-1];
            dp[i]=max(take,nottake);
        }
        return dp[n-1];
    }
    
    /* M-II Memoization
    int f(vector<int> &nums, int n,vector<int> &dp)
    {
        if(n<0)
            return 0;
        if(dp[n]!=-1)
            return dp[n];
        int take=f(nums,n-2,dp)+nums[n];
        int nottake=f(nums,n-1,dp);
        return dp[n]=max(take,nottake);
    }
    
    int rob(vector<int>& nums){
        vector<int> dp(nums.size(),-1);
        f(nums,nums.size()-1,dp);
        return dp[nums.size()-1];
    }*/
    
    /* M-I Recursion
    int f(vector<int> &nums, int n)
    {
        if(n<0)
            return 0;
        int take=nums[n]+f(nums,n-2);
        int nottake=f(nums,n-1);
        return max(take,nottake);
    }
    int rob(vector<int>& nums){
        return f(nums,nums.size()-1);
    }*/
};