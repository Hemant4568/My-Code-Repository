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
    TreeNode* deleteNodes(TreeNode* node, unordered_set<int>& toDelete,vector<TreeNode*>& forest, bool isRoot)
    {
        if (node == nullptr) return nullptr;
        
        bool deleted = toDelete.find(node->val) != toDelete.end();
        
        if (isRoot && !deleted) {
            forest.push_back(node);
        }
        
        node->left = deleteNodes(node->left, toDelete, forest, deleted);
        node->right = deleteNodes(node->right, toDelete, forest, deleted);
        
        return deleted ? nullptr : node;
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
         unordered_set<int> toDelete(to_delete.begin(), to_delete.end());
        vector<TreeNode*> forest;
        
        deleteNodes(root, toDelete, forest, true);
        
        return forest;
    }
};