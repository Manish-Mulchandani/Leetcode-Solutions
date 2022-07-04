class Solution {
public:
    int candy(vector<int>& rat) {
        vector<int> num(rat.size(),1);
        for(int i=1; i<rat.size(); i++)
        {
            if(rat[i]>rat[i-1])
                num[i]=num[i-1]+1;
        }
        
        for(int i=rat.size()-2; i>=0; i--)
        {
            if(rat[i]>rat[i+1])
            {
                num[i]=max(num[i+1]+1, num[i]);
            }
        }
        int ans=0;
        for(auto &i:num)
            ans+=i;
        return ans;
        
    }
};