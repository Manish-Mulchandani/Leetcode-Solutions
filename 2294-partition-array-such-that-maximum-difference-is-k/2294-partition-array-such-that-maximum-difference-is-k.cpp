class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int j,x;
        int ans=0;
        for(int i=0; i<nums.size(); i++)
        {
            x=nums[i]+k;
            j=upper_bound(nums.begin()+i, nums.end(), x)-nums.begin();
            ans++;
            i=j-1;
        }
        return ans;
    }
};