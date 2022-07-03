class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n=nums.size();
        
        string s="";
        for(int i=1; i<n; i++)
        {
            if(nums[i]>nums[i-1])
                s.push_back('+');
            else if(nums[i]<nums[i-1])
                s.push_back('-');
        }
        int a=0;
        for(int i=1; i<s.length(); i++)
        {
            if(s[i]!=s[i-1])
                a++;
        }
        if(s.length()>0)
            a++;
        return a+1;
    }
};