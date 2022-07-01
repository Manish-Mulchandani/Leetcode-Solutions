class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n=nums.size();
        for(int i=0; i<n-2; i++)
        {
            int l=i+1, r=n-1;
            while(l<r)
            {
                int sum=nums[i]+nums[l]+nums[r];
                if(sum==0)
                {
                    vector<int> A;
                    A.push_back(nums[i]);
                    A.push_back(nums[l]);
                    A.push_back(nums[r]);
                    ans.push_back(A);
                    while(nums[l]==A[1] && l<r)
                        l++;
                    while(nums[r]==A[2] && l<r)
                        r--;
                }
                else if(sum>0)
                {
                    r--;
                }
                else 
                    l++;
            }
            while(i+1<n && nums[i+1]==nums[i])
                i++;
        }
        return ans;
    }
};