/**
 * https://leetcode.com/problems/insert-into-a-binary-search-tree/
 */

struct TreeNode* create_node(int val){
    struct TreeNode* new_node = malloc(sizeof(struct TreeNode));
    new_node->val = val;
    new_node->left = new_node->right = NULL;
    return new_node;
}

struct TreeNode* insertIntoBST(struct TreeNode* root, int val){
    if(root){
        if(root->val > val && root->left) insertIntoBST(root->left, val);
        else if(root->val < val && root->right) insertIntoBST(root->right, val);
        else if(root->val > val) root->left = create_node(val);
        else root->right = create_node(val);
    }
    return root;
}
