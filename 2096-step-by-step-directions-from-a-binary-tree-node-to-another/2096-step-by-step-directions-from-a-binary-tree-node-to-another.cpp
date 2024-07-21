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
    bool findPath(TreeNode* root, int value, string &path) {
    if (!root) return false;
    if (root->val == value) return true;
    
    path.push_back('L');
    if (findPath(root->left, value, path)) return true;
    path.pop_back();
    
    path.push_back('R');
    if (findPath(root->right, value, path)) return true;
    path.pop_back();
    
    return false;
}

TreeNode* findLCA(TreeNode* root, int startValue, int destValue) {
    if (!root) return NULL;
    if (root->val == startValue || root->val == destValue) return root;
    
    TreeNode* left = findLCA(root->left, startValue, destValue);
    TreeNode* right = findLCA(root->right, startValue, destValue);
    
    if (left && right) return root;
    return left ? left : right;
}

    string getDirections(TreeNode* root, int startValue, int destValue) {
        string pathToStart, pathToDest;
    
    findPath(root, startValue, pathToStart);
    findPath(root, destValue, pathToDest);
    
    TreeNode* lca = findLCA(root, startValue, destValue);
    
    string pathFromLcaToStart;
    findPath(lca, startValue, pathFromLcaToStart);
    
    string pathFromLcaToDest;
    findPath(lca, destValue, pathFromLcaToDest);
   
    string result(pathFromLcaToStart.size(), 'U'); 
    result += pathFromLcaToDest;
    
    return result;
    }
};