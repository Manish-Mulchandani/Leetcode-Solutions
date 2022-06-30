class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        n=(n-1)/2;
        n=nums[n];
        int ans=0;
        for(auto &i:nums)
        {
            ans+=abs(i-n);
        }
        return ans;
    }
};