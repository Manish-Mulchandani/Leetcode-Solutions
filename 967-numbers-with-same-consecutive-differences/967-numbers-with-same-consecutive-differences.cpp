class Solution {
public:
    
    void rec(vector<int> &ans, char i, string &a, int k, int n)
    {
        if(a.length()==n)
        {
            
            if(!ans.empty() && ans.back()==stoi(a))
                return ;
            ans.push_back(stoi(a));
            return ;
        }
        a.push_back(i);
        if(i+k<='9')
            rec(ans,i+k,a,k,n);
        if(i-k>='0')
            rec(ans,i-k,a,k,n);
        a.pop_back();
        return ;
    }

        
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        string a;
        for(char i='1'; i<='9'; i++)
        {
            a.push_back(i);
            if(i+k<='9')
                rec(ans,i+k,a,k,n);
            if(i-k>='0')
                rec(ans,i-k,a,k,n);
            a.pop_back();
        }
        return ans;
    }
};