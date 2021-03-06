/*
Find the sum of all left leaves in a given binary tree.

Example:

    3
   / \
  9  20
    /  \
   15   7
There are two left leaves in the binary tree, with values 9 and 15 respectively. Return 24.
*/
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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == nullptr) return 0;
        root->val = 0;
        return sumOfLeftLeavesRec(root);
    } 
    int sumOfLeftLeavesRec(TreeNode* root){
        if(!root) return 0;
        if(root->right) root->right->val = 0;
        if(!root->left && !root->right) return root->val;
        return sumOfLeftLeavesRec(root->left) + sumOfLeftLeavesRec(root->right);
    }
};