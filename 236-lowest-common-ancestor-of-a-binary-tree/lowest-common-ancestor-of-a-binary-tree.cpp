/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         TreeNode *ca = NULL;
         function<bool(TreeNode*)> helper = [&](TreeNode * root){
            if(root==NULL) return false;
            bool x = helper(root->left);
            bool y = helper(root->right);

            if(x and y) {
                ca = root;
                return false;
            }
            else if((root->val == p->val or root->val == q->val) and (x or y)) {
                ca = root;
                return false;
            }
            else if(root->val == p->val or root->val == q->val) return true;
            return x or y;

         };
        helper(root);
        if(ca) return ca;
        return NULL;
    }
};