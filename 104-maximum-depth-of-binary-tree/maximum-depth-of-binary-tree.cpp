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
    int fun(TreeNode* root,int cnt){
        if(root==NULL) return cnt;
        int left=fun(root->left,cnt+1);
        int right =fun(root->right,cnt+1);
        return max(left,right);
    }
    int maxDepth(TreeNode* root) {

        return fun(root,0);
    }
};