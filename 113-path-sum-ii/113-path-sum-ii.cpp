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
    
    void f(TreeNode* root,vector<int> &A, vector<vector<int>> &ans, int a, int sum)
    {
        if(!root)
            return ;
            
        if(root->left==NULL && root->right==NULL)
        {
            A.push_back(root->val);
            a+=root->val;
            if(a==sum)
                ans.push_back(A);
            A.pop_back();
            a-=root->val; 
            return ;
        }
        A.push_back(root->val);
        a+=root->val;
        f(root->left,A,ans,a,sum);
        f(root->right,A,ans,a,sum);
        A.pop_back();
        a-=root->val;
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> ans;
        vector<int> A;
        f(root,A,ans,0,sum);
        return ans;
    }
};