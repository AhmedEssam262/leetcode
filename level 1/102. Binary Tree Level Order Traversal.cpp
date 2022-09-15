class Solution {
public:
   vector<vector<int>> levelOrder(TreeNode* root) {
    queue<TreeNode*> q;
    vector<vector<int>> res;

    if (root!=nullptr)
        q.push(root);

    while (!q.empty()) {
        int level_size = q.size();

        vector<int> sub;

        while (level_size-- > 0) {
            TreeNode* cur = q.front(); 
            q.pop();

            sub.push_back(cur->val);

            if (cur->left) q.push(cur->left);
            if (cur->right) q.push(cur->right);
        }

        res.push_back(sub);
    }

    return res;
}
};
