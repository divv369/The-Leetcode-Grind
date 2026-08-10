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
    long long sum = 0;

    void fun(TreeNode* root,    long long num ) {
        if (root == NULL)
            return;
        
        // while (root->left) {
            // TreeNode* t = root->left;
            // int value=t->val;
            num = num * 10 +root->val;
        // }
        if(root->left==NULL && root->right==NULL){
        sum += num;
        return;
        }
        fun(root->left,num);
        fun(root->right,num);
        return;
    }
    int sumNumbers(TreeNode* root) {
        fun(root,0);

        return sum;
    }
};