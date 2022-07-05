class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size())
            return 0;
        sort(nums.begin(), nums.end());
        int ans=0;
        int sum=1;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]==nums[i-1])
                continue;
            else if(nums[i]==nums[i-1]+1)
            {
                sum++;
                ans=max(ans,sum);
            }
            else
                sum=1;
        }
        ans=max(ans,sum);
        return ans;
    }
};