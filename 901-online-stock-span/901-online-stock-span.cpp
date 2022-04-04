class StockSpanner {
public:
    stack<pair<int,int>> S;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int cnt=1;
        while(S.size() && S.top().first<=price)
        {
            cnt+=S.top().second;
            S.pop();    
        }
        S.push({price,cnt});
        return cnt;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */