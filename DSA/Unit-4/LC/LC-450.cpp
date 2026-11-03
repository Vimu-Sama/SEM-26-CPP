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

TreeNode* findMin(TreeNode *root){
    if(root->left!=nullptr){
        return findMin(root->left) ;
    } else {
        return root ;
    }
}

class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr){
            return root ;
        }
        if(key<root->val){
            root->left = deleteNode(root->left, key) ;
        } else if(key>root->val){
            root->right = deleteNode(root->right, key) ;
        } else {
            TreeNode *node = nullptr ;
            if(root->left==nullptr){
                node = root->right ;
                delete root  ;
                root= nullptr ;
                return node ;
            } else if(root->right==nullptr){
                node = root->left ;
                delete root ;
                root= nullptr ;
                return node ;
            } else {
                node = findMin(root->right)  ;
                root->val = node->val ;
                root->right = deleteNode(root->right, node->val) ;
                return root ;
            }
        }
        return root ;
    }
};