class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(), r,l;
        for(r=n-2; r>=0; r--)
        {
            if(nums[r]<nums[r+1])
                break;
        }
        if(r<0)
            reverse(nums.begin(), nums.end());
        else
        {
            for(l=n-1; l>=0; l--)
            {
                if(nums[l]>nums[r])
                    break;
            }
            swap(nums[r],nums[l]);
            reverse(nums.begin()+r+1, nums.end());
        }
        
        
    }
};