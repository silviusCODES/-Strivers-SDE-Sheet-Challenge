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
    bool isValidBST(TreeNode* root) {

        return isValidBST(root , INT_MIN, INT_MAX);
        

    }

    bool isValidBST(TreeNode* root, int minval, int maxval){
        if(root == NULL) return true;

        if(root -> val >= maxval || root -> val <= minval) return false;

        return isValidBST(root -> left, minval, root -> val) && isValidBST(root -> right, root -> val, maxval);
    }
};