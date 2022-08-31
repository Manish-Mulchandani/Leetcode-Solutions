class Solution {
public:
    
    //M-II Memoization
    
    int f(int n, vector<int> &dp)
    {
        if(n==0)
            return 1;
        if(dp[n]!=-1)
            return dp[n];
        if(n==1)
        {
            return dp[n]=f(n-1,dp);
        }
        return dp[n]=f(n-1,dp)+f(n-2,dp);
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return f(n,dp);
    }
    
    /*M-I Recursion --> TLE
    int climbStairs(int n) {
        if(n==0)
            return 1;
        if(n==1)
            return climbStairs(n-1);
        if(n>1)
            return climbStairs(n-1)+climbStairs(n-2);
        return 0;
    }*/
};