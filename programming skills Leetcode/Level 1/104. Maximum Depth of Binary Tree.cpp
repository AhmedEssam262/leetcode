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

    int maxDepth(TreeNode* root) {
        int Ldepth=0, Rdepth=0;
        if(!root)
            return 0;
        else{
            Ldepth = maxDepth(root->left)+1;
            Rdepth = maxDepth(root->right)+1;
        }
        return Ldepth>Rdepth?Ldepth:Rdepth;   
    }
};
