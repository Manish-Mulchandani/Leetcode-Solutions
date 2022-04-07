class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> A;
        for(auto &i:stones)
            A.push(i);
        int x,y;
        while(A.size()>1)
        {
            x=A.top();
            A.pop();
            y=A.top();
            A.pop();
            if(x>y)
                A.push(x-y);
        }
        if(A.empty())
            return 0;
        return A.top();
    }
};