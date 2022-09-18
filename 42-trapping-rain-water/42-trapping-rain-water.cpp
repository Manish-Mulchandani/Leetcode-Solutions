class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int a=0;
        for(int i=1; i<n; i++)
        {
            if(height[i]>height[a])
                a=i;
        }
        //cout<<a<<endl;
        int ans=0,mx=0;
        for(int i=0; i<a; i++)
        {
            if(height[i]>mx)
                mx=height[i];
            else 
                ans+=mx-height[i];
        }
        mx=0;
        for(int i=n-1; i>a; i--)
        {
            if(height[i]>mx)
                mx=height[i];
            else 
                ans+=mx-height[i];
        }
        return ans;
    }
};