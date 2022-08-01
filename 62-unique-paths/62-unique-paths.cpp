class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m==1 || n==1)
            return 1;
        m--;
        n--;
        long long ans=1;
        int j=1;
        for(int i=max(m,n)+1; i<=m+n; i++, j++)
        {
            ans=ans*i;
            ans=ans/j;
        }
        return (int)ans;
    }
};