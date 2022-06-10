class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<int,int> M;
        int j=-1;
        int ans=0;
        for(int i=0; i<s.length(); i++)
        {
            if(M.find(s[i])==M.end())
                M[s[i]]=i;
            else 
            {
                j=max(j,M[s[i]]);
                M[s[i]]=i;
            }
            ans=max(ans,i-j);
        }
        return ans;
    }
};