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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
         if (depth == 1) {
        TreeNode* new_root = new TreeNode(val);
        new_root->left = root;
        return new_root;
    }
    queue<TreeNode*> q;
    q.push(root);
    int current_depth = 1;
    
    while (!q.empty()) {
        int size = q.size();
        if (current_depth == depth - 1) {
            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();
                
                TreeNode* left_child = new TreeNode(val);
                left_child->left = node->left;
                node->left = left_child;
                
                TreeNode* right_child = new TreeNode(val);
                right_child->right = node->right;
                node->right = right_child;
            }
            break;
        }
        for (int i = 0; i < size; ++i) {
            TreeNode* node = q.front();
            q.pop();
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        ++current_depth;
    }
    return root;
    }
};