class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int n=card.size();
        int ans=0;
        int sum=0;
        for(int i=0; i<k; i++)
            sum+=card[i];
        int j=k-1;
        ans=sum;
        for(int i=n-1; i>=n-k; i--)
        {
            sum-=card[j];
            sum+=card[i];
            j--;
            ans=max(ans,sum);
        }
        return ans;
            
    }
};