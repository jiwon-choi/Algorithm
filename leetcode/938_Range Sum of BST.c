/**
 * https://leetcode.com/problems/range-sum-of-bst/
 */

int my_func(struct TreeNode *root, int L, int R, int *result)
{
    if (root)
    {
        my_func(root->left, L, R, result);
        if (root->val >= L && root->val <= R)
            *result += root->val;
        if (root->val > R)
            return result;
        my_func(root->right, L, R, result);
    }
    return result;
}

int rangeSumBST(struct TreeNode *root, int L, int R)
{
    int result = 0;
    my_func(root, L, R, &result);

    return result;
}
