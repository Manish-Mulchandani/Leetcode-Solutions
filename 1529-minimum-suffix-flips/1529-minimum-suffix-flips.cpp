class Solution {
public:
    int minFlips(string target) {
        char a='0';
        int ans=0;
        for(auto &i:target)
        {
            if(i!=a)
            {
                ans++;
                a=1-a+'0'+'0';
            }
        }
        return ans;
    }
};