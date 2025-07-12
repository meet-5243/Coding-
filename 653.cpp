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

        unordered_set<int> seen;

    bool dfs(TreeNode* root, int k) {
        if (!root) return false;

        if (seen.count(k - root->val)) return true;
        seen.insert(root->val);

        return dfs(root->left, k) || dfs(root->right, k);
    }

    bool findTarget(TreeNode* root, int k) {
        seen.clear(); // Reset before each call
        return dfs(root, k);
    }
    
};