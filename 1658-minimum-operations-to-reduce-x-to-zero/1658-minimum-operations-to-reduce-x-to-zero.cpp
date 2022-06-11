class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        /*M-II*/
        int n=nums.size();
        unordered_map<int,int> A;
        unordered_map<int,int> B;
        int a=0;
        for(int i=0; i<n; i++)
        {
            a+=nums[i];
            A[a]=i+1;
        }
        a=0;
        for(int i=0; i<n; i++)
        {
            a+=nums[n-i-1];
            B[a]=i+1;
        }
        int ans=INT_MAX;
        if(A.find(x)!=A.end())
            ans=min(ans,A[x]);
        if(B.find(x)!=B.end())
            ans=min(ans,B[x]);
        int b=0;
        for(int i=0; i<n; i++)
        {
            b+=nums[i];
            if(B.find(x-b)!=B.end())
                ans=min(ans,i+1+B[x-b]);
        }
        //cout<<ans<<endl;
        if(ans>n)
            return -1;
        return ans;
        
        /* M-I
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
            return ans; */
            
    }
};