class Solution {
public:
    
    static bool cmp(vector<int> &a, vector<int> &b)
    {
        if(a[0]==b[0])
            return a[1]>b[1];
        return a[0]<b[0];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& pro) {
        sort(pro.begin(), pro.end(), cmp);
        int n=pro.size();
        int ma=pro[n-1][0],mb=pro[n-1][1];
        int ans=0;
        for(int i=n-2; i>=0; i--)
        {
            if(pro[i][0]<ma && pro[i][1]<mb)
                ans++;
            else if(pro[i][1]>mb)
            {
                ma=pro[i][0];
                mb=pro[i][1];
            }
        }
        return ans;
    }
};