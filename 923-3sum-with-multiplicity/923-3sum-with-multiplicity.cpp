class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        long long ans=0;
        long long hash[110]={0};
        for(auto &i:arr)
        {
            hash[i]++;
        }
        for(int i=0; i<101; i++)
        {
            for(int j=i; j<101; j++)
            {
                int c=target-i-j;
                if(c<0 || c>100)
                    continue;
                if(i==j && j==c)
                {
                    ans+=(hash[i]*(hash[i]-1)*(hash[i]-2))/6;
                }
                else if(i==j && j!=c)
                {
                    ans+=hash[c]*(((hash[i])*(hash[i]-1))/2);
                }
                else if(i<j && j<c)
                {
                    ans+=hash[i]*hash[j]*hash[c];
                }
                ans%=1000000007;
            }
        }
        return ans%(1000000007);
    }
};