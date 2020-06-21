/**
 * https://leetcode.com/problems/maximum-depth-of-binary-tree/
 */

int maxDepth(struct TreeNode* root){
    if(!root) {
        int depth = 0;
        return depth;
    }
    int a = maxDepth(root->left) + 1;
    int b = maxDepth(root->right) + 1;
    
    return a>b?a:b;
}
