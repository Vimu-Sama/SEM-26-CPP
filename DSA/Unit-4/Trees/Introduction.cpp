#include<iostream>

using namespace std ;

struct TreeNode{
    int data ;
    TreeNode *left ;
    TreeNode *right ;

    TreeNode(int data){
        this->data = data ;
        left= nullptr ;
        right = nullptr ;
    }
};

int main(){
    TreeNode *root = new TreeNode(1) ;
    root->left= new TreeNode(5) ;
    root->left->left= new TreeNode(10) ;
    root->left->right = new TreeNode(9) ;
    root->left->right->right = new TreeNode(7) ;

    root->right = new TreeNode(2) ;
    root->right->left = new TreeNode(11) ;   
    root->right->right = new TreeNode(12) ;
}