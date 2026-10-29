#include<iostream>
using namespace std ;

struct TreeNode{
    char data;
    TreeNode *left ;
    TreeNode *right ;

    TreeNode(char data){
        this->data = data;
        this->left = nullptr ;
        this->right = nullptr ;
    }
};

int main(){
    TreeNode *root = new TreeNode('A') ;
    root->left = new TreeNode('B') ;
    root->right = new TreeNode('C') ;
    root->left->left = new TreeNode('D'); 
    root->left->right = new TreeNode('E') ;
    root->right->right = new TreeNode('F') ;
    root->right->right->left = new TreeNode('G') ;
    return 0 ;
}