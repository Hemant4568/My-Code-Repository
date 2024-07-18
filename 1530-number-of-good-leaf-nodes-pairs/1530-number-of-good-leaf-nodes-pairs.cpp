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
   unordered_map<TreeNode*, int> dfs(TreeNode* node, int& good_pairs_count, int distance) {
    unordered_map<TreeNode*, int> leaf_depths;
    
    // Base case: if node is null, return empty map
    if (node == nullptr) return leaf_depths;
    
    // If node is a leaf node
    if (node->left == nullptr && node->right == nullptr) {
        leaf_depths[node] = 0;
        return leaf_depths;
    }
    
    // Recursive DFS for left and right subtrees
    auto left_leaf_depths = dfs(node->left, good_pairs_count, distance);
    auto right_leaf_depths = dfs(node->right, good_pairs_count, distance);
    
    // Merge left and right subtree depths
    for (auto & [lnode, ldepth] : left_leaf_depths) {
        for (auto & [rnode, rdepth] : right_leaf_depths) {
            int total_dist = ldepth + rdepth + 2; // distance between lnode and rnode
            if (total_dist <= distance) {
                ++good_pairs_count;
            }
        }
    }
    
    // Calculate leaf depths for current subtree
    for (auto & [lnode, ldepth] : left_leaf_depths) {
        leaf_depths[lnode] = ldepth + 1;
    }
    for (auto & [rnode, rdepth] : right_leaf_depths) {
        leaf_depths[rnode] = rdepth + 1;
    }
    
    return leaf_depths;
}

int countPairs(TreeNode* root, int distance) {
    if (root == nullptr) return 0;
    
    int good_pairs_count = 0;
    dfs(root, good_pairs_count, distance);
    
    return good_pairs_count;
}

};