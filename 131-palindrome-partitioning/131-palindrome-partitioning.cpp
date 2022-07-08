class Solution {
public:
    
    bool check(string &s, int i, int l)
    {
        while(l<=i)
        {
            if(s[i]!=s[l])
                return false;
            l++;
            i--;
        }
        return true;
    }
    
    void f(vector<vector<string>> &ans, string &s, int l,vector<string> &A)
    {
        if(l==s.length())
        {
            ans.push_back(A);
            return ;
        }
        for(int i=l; i<s.length(); i++)
        {
            if(check(s,i,l))
            {
                A.push_back(s.substr(l, i-l+1));
                f(ans,s,i+1,A);
                A.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> A;
        f(ans,s,0,A);
        return ans;
    }
};