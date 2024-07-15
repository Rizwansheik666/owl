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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> mpp;
        unordered_set<int> children;
        
        for(int i=0;i<descriptions.size();i++){
            int parent=descriptions[i][0];
            int child = descriptions[i][1];
            int dir = descriptions[i][2];

            TreeNode *x,*y;
            if(mpp.find(parent)==mpp.end()){
                x = new TreeNode(parent);
                mpp[parent] = x;
            }
            else x = mpp[parent];

            if(mpp.find(child)==mpp.end()){
                y = new TreeNode(child);
                mpp[child] = y;
            }
            else y = mpp[child];

            if(dir == 1) x->left = y;
            else x->right = y;


            children.insert(child);
        }
        TreeNode* root = nullptr;
        for( auto [val, node] : mpp){
            if(children.find(val) == children.end()){
                root = node;
                break;
            }
        }
        return root;
    }
};