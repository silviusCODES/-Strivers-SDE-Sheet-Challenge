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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        return bst(preorder, i , INT_MAX);
    }

    TreeNode* bst(vector<int>& preorder, int& i, int bound){
        if(i == preorder.size() || preorder[i] > bound) return NULL;

        TreeNode* node = new TreeNode(preorder[i++]);

        node -> left = bst(preorder, i , node -> val);
        node -> right = bst(preorder , i, bound);

        return node;
    }
};