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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> res ;
        if(root==NULL) return res;

        q.push(root);
        int cnt=1 ;
        while(!q.empty()){
            vector<int> temp;
            int size=q.size();
            while(size--){
                TreeNode* t=q.front();
                temp.push_back(t->val);
                q.pop();
                if(t->left!=NULL) q.push(t->left) ;
                if(t->right!=NULL) q.push(t->right);
                
            }
            cnt++ ;
            
            if(cnt%2==1){
            reverse(temp.begin(),temp.end());
            }
            res.push_back(temp);
            

        }
        return res;

    }
};