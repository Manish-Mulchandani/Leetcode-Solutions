class Solution {
public:
    
    static bool cmp(pair<int,int> &a, pair<int,int> &b)
    {
        if(a.second==b.second)
            return a.first>b.first;
        return a.second>b.second;
    }
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int,int>> A;
        for(int i=0; i<speed.size(); i++)
        {
            A.push_back({speed[i],efficiency[i]});
        }
        sort(A.begin(), A.end(), cmp);
        long long a=0,b=0,ans=0;
        multiset<long long> M;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        for(int i=0; i<k; i++)
        {
            a+=A[i].first;
            M.insert(A[i].second);
            pq.push(A[i]);
            auto it=M.begin();
            b=*it;
            ans=max(a*b,ans);
        }
        for(int i=k; i<A.size(); i++)
        {
            auto c=pq.top();
            pq.pop();
            a-=c.first;
            M.erase(M.lower_bound(c.second));
            a+=A[i].first;
            M.insert(A[i].second);
            pq.push(A[i]);
            auto itr=M.begin();
            b=*itr;
            ans=max(ans,a*b);
        }
        return (int)(ans%1000000007);
    }
};