/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int maxSum;
    int solve(TreeNode* root) {

        // basee case
        if (root == NULL) {
            return 0;
        }

        int l = solve(root->left);
        int r = solve(root->right);

        // ab 3 conditions

        int goodBottom = l + r + root->val;
        int goodOne = max(l, r) + root->val;
        int goodRoot = root->val;

        maxSum = max({maxSum, goodBottom, goodOne, goodRoot});

        return max(goodOne, goodRoot);
    }

    int maxPathSum(TreeNode* root) {
        maxSum = INT_MIN;

        solve(root);
        return maxSum;
    }
};