class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int> > A;
    int n;
    KthLargest(int k, vector<int>& nums) {
        n=k;
        for(auto &i:nums)
        {
            A.push(i);
            if(A.size()>k)
                A.pop();
        }
        
    }
    
    int add(int val) {
        A.push(val);
        if(A.size()>n)
            A.pop();
        return A.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */