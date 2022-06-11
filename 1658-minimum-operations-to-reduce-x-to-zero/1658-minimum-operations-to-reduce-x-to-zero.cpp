class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0,n=nums.size();
        int flag=0;
        for(auto &i:nums)
            flag+=i;
        if(flag<x)
            return -1;
        int ans=INT_MAX;
        int j=0;
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
            if(sum==x)
            {
                ans=min(ans,i+1);
                j=i;
                break;
            }
            else if(sum>x)
            {
                sum-=nums[i];
                j=i-1;
                break;
            }
        }
        for(int k=n-1; k>=0; k--)
        {
            
            if(k==j)
            {
                if(ans==INT_MAX)
                    return -1;
                else 
                    return ans;
            }
            sum+=nums[k];
            int l=-2;
            while(sum>=x)
            {
                if(sum==x && l!=j)
                {
                    ans=min(ans,n-k+j+1);
                    l=j;
                    //return ans;
                }
                else if(j!=-1)
                {
                    sum-=nums[j];
                    j--;
                }
                else 
                    break;
            }
        }
        if(ans==INT_MAX)
            return -1;
        else 
            return ans;
            
    }
};