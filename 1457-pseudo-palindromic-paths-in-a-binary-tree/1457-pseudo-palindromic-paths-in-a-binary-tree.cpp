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
    int ans=0;
    unordered_map<int,int> M;
    void f(TreeNode* root)
    {
        if(root==NULL)
            return ;
        M[root->val]++;
        if(root->left==NULL && root->right==NULL)
        {
            int tmp=0;
            for(int i=0; i<=9; i++)
            {
                if(M[i]%2!=0)
                    tmp++;
            }
            if(tmp<=1)
                ans++;
        }
        f(root->left);
        f(root->right);
        M[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        f(root);
        return ans;
    }
};