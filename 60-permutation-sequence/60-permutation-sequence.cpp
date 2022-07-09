class Solution {
public:
    string getPermutation(int n, int k) {
        int fact=1;
        vector<int> num;
        for(int i=1; i<n; i++)
        {
            num.push_back(i);
            fact*=i;
        }
        num.push_back(n);
        k--;
        string ans="";
        while(1)
        {
            ans.append(to_string(num[k/fact]));
            num.erase(num.begin() + (k/fact));
            if(num.size()==0)
                break;
            k%=fact;
            fact/=num.size();
        }
        return ans;
    }
};