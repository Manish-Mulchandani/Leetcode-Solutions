class Solution {
public:
    int minDeletions(string s) {
        int hash[26]={0};
        int n=26;
        for(auto &i:s)
        {
            hash[i-'a']++;
        }
        sort(hash, hash+n, greater<int>());
        int ans=0;
        for(int i=1; i<n; i++)
        {
            if(hash[i]>=hash[i-1])
            {
                ans+=hash[i]-(hash[i-1]-1);
                hash[i]=hash[i-1]-1;
            }
            if(hash[i]==0)
            {
                for(int j=i+1; j<n; j++)
                    ans+=hash[j];
                break;
            }
        }
        return ans;
        
    }
};