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
 #include <iostream>
#include<vector>
class Solution {
public:
vector<int> v1;

  void taverse1(TreeNode* root1) {
    

        if(root1 == nullptr)
            return;
        
        taverse1(root1->left);
        if(root1->left==nullptr && root1->right==nullptr ){
            v1.push_back(root1->val);
        }
        taverse1(root1->right);
        
    }

vector<int> v2;

  void taverse2(TreeNode* root2) {

        if(root2 == nullptr)
            return;
        
        taverse2(root2->left);
        if(root2->left==nullptr && root2->right==nullptr ){
            v2.push_back(root2->val);
        }
        taverse2(root2->right);
        
    }



    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        taverse1(root1);
        taverse2(root2);
        if (v1 == v2)
            return 1;

        return 0;


    }
};
