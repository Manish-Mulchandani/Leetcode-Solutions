class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        int ans=0;
        int d,e;
        while(pq.top()!=0)
        {
            d=pq.top();
            pq.pop();
            e=pq.top();
            pq.pop();
            if(d==0 || e==0)
                break;
            ans++;
            pq.push(--d);
            pq.push(--e);
        }
        return ans;
    }
};