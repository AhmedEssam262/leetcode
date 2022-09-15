/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void preorder1(Node* root,vector<int>& nodes) {
        if(root ==nullptr)
            return;
        nodes.push_back(root->val);
        for(int i=0; i < root->children.size();i++){
            preorder1(root->children[i],nodes);
        }
    }
    
    vector<int> preorder(Node* root) {
        vector<int> nodes;
        preorder1(root,nodes);
        return nodes;
    }
    
    
};
