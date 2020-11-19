/**
 * https://leetcode.com/problems/same-tree/
 */

bool isSameTree(struct TreeNode *p, struct TreeNode *q)
{
    bool result = true;
    if (!p || !q)
    {
        if (!p && !q)
            result = true;
        else
            result = false;
    }
    else if (p->val == q->val)
    {
        bool result1 = isSameTree(p->left, q->left);
        bool result2 = isSameTree(p->right, q->right);
        if (!(result1 && result2))
            result = false;
    }

    else
        result = false;
    return result;
}
