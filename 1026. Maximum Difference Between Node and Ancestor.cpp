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
vector<int> v;
void traverse(TreeNode* root,int val,int dif) {
    if(root==nullptr)
        return;
    if(abs(root->val -val) > dif )
        dif =abs(root->val -val);
    traverse( root->left, val, dif);
    
    traverse(root->right, val, dif);
    v.push_back(dif);
}

void traversefirst(TreeNode* root) {
    traverse( root, root->val,0);
}

void traverse_all(TreeNode* root) {
    if(root==nullptr)
        return;
    traverse( root, root->val,0);

    if(root->left !=nullptr)
        traverse_all( root->left);

    if(root->right !=nullptr)
         traverse_all(root->right);
}


    int maxAncestorDiff(TreeNode* root) {
//        traversefirst(root);
        traverse_all(root);

        int max=0;
        for(int i=0;i<v.size();i++){
            if(v[i]>max){
                max=v[i];
            }

        }
        return max;
    }
};
