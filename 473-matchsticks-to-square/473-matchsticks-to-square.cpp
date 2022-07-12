class Solution {
public:
    int a,b,c,d;
    
    bool check(vector<int> &match, int i)
    {
        if(i==match.size())
        {
            if(a==0 && b==0 && c==0 && d==0)
                return true;
            return false;
        }
        if(match[i]<=a)
        {
            a-=match[i];
            if(check(match,i+1))
                return true;
            a+=match[i];
        }
        if(match[i]<=b)
        {
            b-=match[i];
            if(check(match,i+1))
                return true;
            b+=match[i];
        }
        if(match[i]<=c)
        {
            c-=match[i];
            if(check(match,i+1))
                return true;
            c+=match[i];
        }
        if(match[i]<=d)
        {
            d-=match[i];
            if(check(match,i+1))
                return true;
            d+=match[i];
        }
        return false;
    }
    
    bool makesquare(vector<int>& match) {
        if(match.size()<4)
            return false;
        int sum=0;
        for(auto &i:match)
            sum+=i;
        if(sum%4!=0)
            return false;
        sum=sum/4;
        a=sum;
        b=sum;
        c=sum;
        d=sum;
        sort(match.rbegin(), match.rend());
        if(check(match,0))
            return true;
        return false;
    }
};