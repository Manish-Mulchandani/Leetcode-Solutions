class MinStack {
public:
    stack<pair<int,int>> S;
    int mn=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        if(!S.empty())
            mn=min(S.top().second,val);
        else 
            mn=val;
        S.push({val,mn});
    }
    
    void pop() {
        S.pop();
    }
    
    int top() {
        return S.top().first;
    }
    
    int getMin() {
        return S.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */