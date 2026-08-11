/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
     
    int fun(TreeNode* root) {
        if (root == NULL)
            return 0;
        if(root->left==NULL){return 1+fun(root->right);}
        else if(root->right==NULL){return 1+fun(root->left);}
        int left = fun(root->left);
        int right = fun(root->right);
         
        int ans=min(left,right);
        return 1+ans ;
    }
    int minDepth(TreeNode* root) { return fun(root); }
};