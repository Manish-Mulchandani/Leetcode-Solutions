/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        queue<Node*> q;
        if(root==NULL)
            return {};
            
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int> A;
            for(int i=0; i<size; i++)
            {
                Node* tmp=q.front();
                q.pop();
                A.push_back(tmp->val);
                for(auto &n:tmp->children)
                        q.push(n);
                
            }
            ans.push_back(A);
        }
        return ans;
    }
};