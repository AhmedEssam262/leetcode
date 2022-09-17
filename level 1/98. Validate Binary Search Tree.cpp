class Solution {
public:
    bool recurse(TreeNode* node, long long lower, long long upper){
        if(!node) return true;
        
        if(node->val <= lower) return false;
        if(node->val >= upper) return false;
        
        if(!recurse(node->left, lower, node->val)) return false;
        if(!recurse(node->right, node->val, upper)) return false;
        
        return true;
    }
    
    bool isValidBST(TreeNode* root) {
        // cout << LLONG_MIN << endl;
        // cout << LLONG_MAX << endl;
        return recurse(root, LLONG_MIN, LLONG_MAX);
    }
};

/* This is accepted for 62/80 testcases
class Solution {
public:
    void BST(TreeNode* root,int& check){
        int l=1;
        int r=1;
        if(root ==nullptr)
            return;
        
        if(root->left ==nullptr && root->right != nullptr){
            l=0;
            if(root->val >= root->right->val)
                check=0;
                
        }
        if(root->left !=nullptr && root->right == nullptr){
            r=0;
            if(root->val <= root->left->val )
                check=0;           
        }
        if(root->left ==nullptr || root->right == nullptr)
            return;
        if(root->val >= root->right->val || root->val <= root->left->val )
            check = 0; 
        
        BST(root->left,check);
        BST(root->right,check);
        if(r==0 && l==0)
            check=0;
    }
    
    
    bool isValidBST(TreeNode* root) {
        int check=1;
        
         BST(root,check);
        return check;
    }
};
