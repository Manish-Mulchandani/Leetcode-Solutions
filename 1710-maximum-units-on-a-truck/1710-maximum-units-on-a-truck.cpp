class Solution {
public:
    
    static bool cmp(vector<int> &A, vector<int> &B)
    {
        return A[1]>B[1];
    }
    
    int maximumUnits(vector<vector<int>>& box, int truck) {
        sort(box.begin(), box.end(), cmp);
        int ans=0,a,b;
        for(auto &i:box)
        {
            a=min(i[0],truck);
            ans+=(a*i[1]);
            truck-=a;
            if(truck==0)
                break;
        }
        return ans;
    };
};