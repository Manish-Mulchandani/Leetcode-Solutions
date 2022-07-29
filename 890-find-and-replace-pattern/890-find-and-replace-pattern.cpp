class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for(auto &i:words)
        {
            unordered_map<char,char> M;
            int flag=1;
            vector<bool> A(26,false);
            for(int j=0; j<i.size(); j++)
            {
                if(M.find(pattern[j])==M.end())
                {
                    if(A[i[j]-'a'])
                    {
                        flag=0;
                        break;
                    }
                    M[pattern[j]]=i[j];
                    A[i[j]-'a']=true;
                }
                else
                {
                    if(M[pattern[j]]!=i[j])
                        flag=0;
                }
            }
            if(flag)
                ans.push_back(i);
        }
        return ans;
    }
};