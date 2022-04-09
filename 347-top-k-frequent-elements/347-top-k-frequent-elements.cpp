class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        
        
        /*M-I*/
        unordered_map<int,int> A;
        for(auto n:nums)
        {
            A[n]++;
        }
        vector<pair<int,int>> B;
        for(auto n:A)
        {
            B.push_back(n);
        }
        sort(B.begin(), B.end(), cmp);
        vector<int> ans;
        for(int i=0; i<k; i++)
            ans.push_back(B[i].first);
        return ans;
    }
private:
    static bool cmp(pair<int, int>& a,
         pair<int, int>& b)
    {
        return a.second > b.second;
    }
};