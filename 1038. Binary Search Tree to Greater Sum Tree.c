/**
 * https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/
 */

struct TreeNode* my_func(struct TreeNode* root, int* sum){
    if(root){
        my_func(root->right, sum);
        *sum += root->val;
        root->val = *sum;
        my_func(root->left, sum);
    }
    return root;
}

struct TreeNode* bstToGst(struct TreeNode* root){
    int sum = 0;
    my_func(root, &sum);
    
    return root;
}
