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
    int sum=0;
    void trav(TreeNode* root,bool state){
        if (root==nullptr){
            return;
        }
        trav(root->left,true);
        if(root->left==nullptr && root->right==nullptr && state){
            sum+=root->val;
        }
        trav(root->right,false);


    }
    int sumOfLeftLeaves(TreeNode* root) {
        trav(root,false);
        return sum;
    }
};
