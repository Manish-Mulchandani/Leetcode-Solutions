class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        unordered_map <char,int> A,B;
        vector<string> ans;
        for(auto &i:words2)
        {
            B.clear();
            for(auto &j:i)
            {
                B[j]++;
                if(A[j]<B[j])
                    A[j]=B[j];
            }
        }
        for(auto &i:words1)
        {   
            B.clear();
            for(auto &j:i)
                B[j]++;
            int flag=1;
            for(auto &j:A)
            {
                if(j.second>B[j.first])
                    flag=0;
            }
            if(flag)
                ans.push_back(i);
        }
        return ans;
    }
};