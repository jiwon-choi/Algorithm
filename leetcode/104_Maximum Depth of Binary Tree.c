/**
 * https://leetcode.com/problems/maximum-depth-of-binary-tree/
 */

int maxDepth(struct TreeNode *root)
{
    if (!root) return 0;
    int a = maxDepth(root->left) + 1;
    int b = maxDepth(root->right) + 1;

    return a > b ? a : b;
}
