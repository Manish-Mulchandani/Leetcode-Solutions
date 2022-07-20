class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        map<char,vector<int>>M;
        for(int i=0; i<s.length(); i++)
        {
            M[s[i]].push_back(i);
        }
        int a,ans=0;
        char c;
        for(auto &i:words)
        {
            int k=-1,flag=1;
            for(int j=0; j<i.length(); j++)
            {
                c=i[j];
                a=(upper_bound(M[c].begin(), M[c].end(), k))-M[c].begin();
                //cout<<a<<" "<<k<<endl;
                if(a>=M[c].size())
                {
                    //cout<<-1<<endl;
                    flag=0;
                    break;
                }
                else 
                    k=M[c][a];
            }
            if(flag)
                ans++;
            //cout<<endl;
        }
        return ans;
        
    }
};