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
    TreeNode* searchBST(TreeNode* root, int val) {
        // Node doesn't exist
        if(root == NULL)
            return NULL;
        // Found the value
        if(root->val == val)
            return root;
        // Search left
        if(val < root->val)
            return searchBST(root->left, val);
        // Search right
        return searchBST(root->right, val);
    }
};