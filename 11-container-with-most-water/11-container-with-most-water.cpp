class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=INT_MIN;
        int n=height.size();
        int l=0,r=n-1;
        while(l<r)
        {
            int w=r-l;
            int len=min(height[l],height[r]);
            ans=max(ans,w*len);
            if(height[l]<height[r])
                l++;
            else 
                r--;
        }
        return ans;
    }
};