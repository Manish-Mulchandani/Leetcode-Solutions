class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        //int hash[1e5 + 5]={0};
        map<int,int> M;
        for(auto &i:changed)
            M[i]++;
        vector<int> A;
        if(M.find(0)!=M.end())
        {
            int a=M[0];
            if(a%2)
                return {};
            for(int j=0; j<a/2; j++)
                A.push_back(0);
            M.erase(0);
        }
        M.erase(0);
        for(auto &i:M)
        {
            if(M[i.first]>0)
            {
                if(M.find(i.first*2)==M.end() || M[i.first*2]<M[i.first])
                    return {};
                M[i.first*2]-=M[i.first];
            }
            else 
                continue;
        }
        //vector<int> A;
        for(auto &i:M)
        {
            for(int j=0; j<i.second; j++)
                A.push_back(i.first);
        }
        return A;
    }
};