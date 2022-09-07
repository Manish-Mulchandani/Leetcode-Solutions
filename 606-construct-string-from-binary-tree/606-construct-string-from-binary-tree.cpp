/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void preorder(TreeNode* root, string &a)
    {
        a.append(to_string(root->val));
        
        if(root->left)
        {
            a.push_back('(');
            preorder(root->left,a);
            a.push_back(')');
        }
        if(root->right)
        {
            if(!root->left)
                a.append("()");
            a.push_back('(');
            preorder(root->right,a);
            a.push_back(')');
        }
        
    }
    
    string tree2str(TreeNode* root) {
        string a="";
        preorder(root,a);
        return a;
    }
};