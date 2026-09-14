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
    TreeNode* lowestCommonAncestor(TreeNode* root,TreeNode* p,TreeNode* q) {
        // Base case
        if(root == NULL)
            return NULL;
        // If current node is p or q
        if(root == p || root == q)
            return root;
        // Search in left subtree
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        // Search in right subtree
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        // p and q found in different subtrees
        if(left != NULL && right != NULL)
            return root;
        // If only left has a result
        if(left != NULL)
            return left;
        // Otherwise return right
        return right;
    }
};