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
    unordered_map<int, int> inorderMapping ;

    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int preStart, int preEnd, int inStart, int inEnd){
        if(preStart>preEnd || inStart>inEnd){
            return nullptr ;
        }
        TreeNode* root = new TreeNode(preorder[preStart]) ;
        int inorderRootIndex = inorderMapping[root->val] ;
        int numLeftElements = inorderRootIndex - inStart ;
        root->left = helper(preorder, inorder, preStart+1, preStart+numLeftElements, inStart, inorderRootIndex-1) ;
        root->right = helper(preorder, inorder, preStart+numLeftElements+1, preEnd, inorderRootIndex+1, inEnd) ;
        return root ;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preorderSize = preorder.size() ;
        int inorderSize = inorder.size() ;
        for(int i =0; i<inorderSize; i++){
            inorderMapping[inorder[i]] = i ;
        }
        return helper(preorder, inorder, 0, preorderSize-1, 0, inorderSize-1) ;
    }
};