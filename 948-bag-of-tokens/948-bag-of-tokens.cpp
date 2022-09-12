class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if(tokens.size()==0)
            return 0;
        sort(tokens.begin(), tokens.end());
        int r=tokens.size()-1;
        int sum=0,ans=0;
        if(power<tokens[0])
            return sum;
        for(int l=0; l<tokens.size() && l<=r; l++)
        {
            if(tokens[l]<=power)
            {
                power-=tokens[l];
                sum++;
                ans=max(ans,sum);
            }
            else 
            {
                power+=tokens[r];
                r--;
                sum--;
                l--;
            }
        }
        return ans;
    }
};