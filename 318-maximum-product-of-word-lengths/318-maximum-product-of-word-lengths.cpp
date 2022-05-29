class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n=words.size();
        vector<int> A(n);
        int hash[26];
        int k=0;
        for(auto &i: words)
        {
            A[k]=0;
            for(int j=0; j<26; j++)
                hash[j]=0;
            for(auto &j:i)
            {
                hash[j-'a']=1;
            }
            for(int j=0; j<26; j++)
            {
                if(hash[j]==1)
                    A[k]+=pow(2,j);
            }
            k++;
        }
        int ans=0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if((A[i]&A[j])==0)
                {
                    if(ans<(words[i].length()*words[j].length()))
                        ans=(words[i].length()*words[j].length());
                }
            }
        }
        return ans;
    }
};