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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if (!root) return ans;
        queue<Node *> q;
        q.emplace(root);
        int sz = 0;
        while ((sz = q.size())) {
            vector<int> l;
            for (int i = 0; i < sz; ++ i) {
                auto curr = q.front(); q.pop();
                l.emplace_back(curr->val);
                for (auto &c : curr->children) q.emplace(c);
            }
            ans.emplace_back(move(l));
        }
        return ans;
    }
};