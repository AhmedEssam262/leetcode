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
    int trav(TreeNode* root,int res){
        if(root==nullptr){
            return 0;
        }
        res=root->val+res*10;
        if(root->left == nullptr && root->right == nullptr){
            return res;
        }
        return trav(root->left,res)+trav(root->right,res);
    
    }


    int sumNumbers(TreeNode* root) {
       return trav(root,0);
        
    }
};
