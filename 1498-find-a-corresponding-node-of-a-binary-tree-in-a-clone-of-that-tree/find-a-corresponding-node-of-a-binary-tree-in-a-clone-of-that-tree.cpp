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
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original==NULL or cloned==NULL) return NULL;
        else if(cloned->val== target->val) return cloned;
        TreeNode* leftS = getTargetCopy(original,cloned->left,target);
        TreeNode* rightS = getTargetCopy(original,cloned->right,target);

        if(leftS !=NULL) return leftS;
        else return rightS;
    }
};