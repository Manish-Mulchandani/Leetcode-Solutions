class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        
        vector<int> ans;
        if(n==0 || target<nums[0] || target>nums[n-1])
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        int a=lower_bound(nums.begin() , nums.end(), target)-nums.begin();
        int b=upper_bound(nums.begin() , nums.end(), target)-nums.begin();
        if(nums[a]==target)
        {
            ans.push_back(a);
            ans.push_back(b-1);
            return ans;
        }
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
        
            
    }
};