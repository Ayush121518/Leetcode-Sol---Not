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

    TreeNode* bst(int &index, int mini, int maxi, vector<int>& preorder)
    {
        if (index == preorder.size())
            return NULL;

        if (preorder[index] < mini || preorder[index] > maxi)
            return NULL;

        TreeNode* root = new TreeNode(preorder[index]);
        index++;


        root->left = bst(index, mini, root->val, preorder);

        root->right = bst(index, root->val, maxi, preorder);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder)
    {
        int index = 0;

        return bst(index, INT_MIN, INT_MAX, preorder);
    }
};