class Solution {
public:
    vector<vector<int>> dp;
    int f(vector<int>& nums, vector<int>& multi, int l, int k)
    {
        if(k>=multi.size())
            return 0;
        if(dp[l][k]==INT_MIN)
        {
            int r=nums.size()-1-(k-l);
            int a=f(nums,multi,l+1,k+1)+(multi[k]*nums[l]);
            int b=f(nums,multi,l,k+1)+(multi[k]*nums[r]);
            dp[l][k]=max(a,b);
        }
        return dp[l][k];
    }
    
    int maximumScore(vector<int>& nums, vector<int>& multi) {
        dp.resize(multi.size()+1,vector<int> (multi.size()+1,INT_MIN));
        return f(nums,multi,0,0); 
    }
    
    /*M-I  Recursion
    int f(vector<int>& nums, vector<int>& multi, int l, int r, int k, int ans)
    {
        if(k==multi.size())
            return ans;
        int a=f(nums,multi,l+1,r,k+1,ans)+(multi[k]*nums[l]);
        int b=f(nums,multi,l,r-1,k+1,ans)+(multi[k]*nums[r]);
        //cout<<a<<" "<<b<<" "<<l<<" "<<r<<" "<<k<<endl;
        return max(a,b);
    }
    
    int maximumScore(vector<int>& nums, vector<int>& multi) {
        return f(nums,multi,0,nums.size()-1,0,0);
    }*/
};