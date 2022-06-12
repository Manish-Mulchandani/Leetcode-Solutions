class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        map<int,int> M;
        int ans=0,sum=0,j=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(M.find(nums[i])!=M.end())
            {
                //int k=j;
                while(nums[j]!=nums[i])
                {
                    M.erase(nums[j]);
                    sum-=nums[j];
                    j++;
                }
                M.erase(nums[j]);
                sum-=nums[j];
                j++;
            }
            sum+=nums[i];
            M[nums[i]]=i;
            ans=max(ans,sum);
        }
        return ans;
    }
};