class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix[0].size();
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto &i:matrix)
        {
            for(auto &j:i)
                pq.push(j);
        }
        while(--k)
            pq.pop();
        return pq.top();
    }
};