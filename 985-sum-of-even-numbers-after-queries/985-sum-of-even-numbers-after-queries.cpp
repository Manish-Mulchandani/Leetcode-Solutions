class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum=0;
        for(auto &i:nums)
        {
            if(i%2==0)
                sum+=i;
        }
        vector<int> ans;
        int a=0,b=0;
        for(int i=0; i<queries.size(); i++)
        {
            a=queries[i][1];
            b=queries[i][0];
            if(nums[a]%2==0)
                sum-=nums[a];
            nums[a]+=b;
            if(nums[a]%2==0)
                sum+=nums[a];
            ans.push_back(sum);
        }
        return ans;
    }
};