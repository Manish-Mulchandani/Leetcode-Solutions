class Solution {
public:
    vector<int> twoSum(vector<int>& num, int t) {
        int l=0,r=num.size()-1;
            vector<int> A;
        while(l<r)
        {
            int sum=num[l]+num[r];
            if(sum>t)
                r--;
            else if(sum<t)
                l++;
            else
            {
                A.push_back(++l);
                A.push_back(++r);
                break;
            }   
        }
        return A;
    }
};