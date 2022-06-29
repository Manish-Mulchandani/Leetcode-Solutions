class Solution {
public:
    int minSwaps(string s) {
        int a=0,b=0,n=s.length();
        int j=n-1;
        int sum=0,ans=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='[')
                sum++;
            else
            {
                sum--;
            }
            if(sum==-1)
            {
                ans++;
                while(s[j]!='[')
                    j--;
                swap(s[i],s[j]);
                sum=1;
            }
        }
        return ans;
    }
};