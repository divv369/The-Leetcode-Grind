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
    TreeNode* wrong1first = NULL;
    TreeNode* wrong1second = NULL;
    TreeNode* wrong2first = NULL;
    TreeNode* wrong2second = NULL;

    int cnt = 0;
    TreeNode* prev = NULL;
    void fun(TreeNode* root) {
        if (root == NULL)
            return;

        fun(root->left);
        if (prev == NULL) {
            prev = root;
            

        } else {
            if (root->val < prev->val) {

                if (cnt == 0) {
                    wrong1first = prev;
                    wrong1second = root;
                }

                if (cnt == 1) {
                    wrong2first = prev;
                    wrong2second = root;
                }
                cnt++;
            }
        }
        prev=root;
        fun(root->right);
        
        return;
    }

    void recoverTree(TreeNode* root) { fun(root); 
    if (cnt == 1)
            swap(wrong1first->val, wrong1second->val);

        if (cnt == 2)
            swap(wrong1first->val, wrong2second->val);}
};