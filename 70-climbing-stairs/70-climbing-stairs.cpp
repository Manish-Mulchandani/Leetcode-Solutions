class Solution {
public:
    
    /* M-IV Space Optimization */
    int climbStairs(int n)
    {
        int t1=0,t2=1,t3=1;
        for(int i=1; i<=n; i++)
        {
            if(i>1)
                t3=t1+t2;
            else 
                t3=t2;
            t1=t2;
            t2=t3;
        }
        return t3;
    }
    
    /* M-III Tabulation
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        dp[0]=1;
        for(int i=1; i<=n; i++)
        {
            dp[i]=dp[i-1];
            if(i>1)
                dp[i]+=dp[i-2];
        }
        return dp[n];
    }*/
    
    /*M-II Memoization  TC-O(N) SC-O(2N)
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
    }*/
    
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