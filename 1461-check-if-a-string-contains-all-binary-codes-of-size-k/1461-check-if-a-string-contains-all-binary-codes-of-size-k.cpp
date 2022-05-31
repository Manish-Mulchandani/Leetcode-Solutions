class Solution {
public:
    bool hasAllCodes(string s, int k) {
        map<int,int> M;
        if(s.length()<=k)
            return false;
        int j=k;
        int l=pow(2,k-1);
        int a=0;
        //reverse(s.begin(), s.end());
        for(int i=0; i<k; i++)
        {
            j--;
            if(s[i]=='1')
                a+=pow(2,j);
        }
        M[a]++;
        for(int i=k; i<s.length(); i++)
        {
            if(a>=l)
            {
                a-=l;
            }
            a*=2;
            if(s[i]=='1')
                a+=1;
            M[a]++;
        }
        j=0;
        for(auto &i:M)
        {
            if(i.first!=j)
                return false;
            j++;
        }
        if(j==(l*2))
            return true;
        return false;
    }
};