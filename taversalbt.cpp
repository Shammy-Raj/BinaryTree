#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
int data;
struct TreeNode *left,*right;
TreeNode(int data){
    this->data=data;
    left=NULL;
}
};

void PreOrderTraversal(TreeNode *root){
    if(root==NULL) return;
    else{
        cout<<root->data<<" ";
        PreOrderTraversal(root->left);
        PreOrderTraversal(root->right);
    }
}

void InOrderTraversal(TreeNode *root){
    if(root==NULL) return;
    else{
        InOrderTraversal(root->left);
        cout<<root->data<<" ";
        InOrderTraversal(root->right);
    }
}

void PostOrderTraversal(TreeNode *root){
    if(root==NULL) return;
    else{
        PostOrderTraversal(root->left);
        PostOrderTraversal(root->right);
        cout<<root->data<<" ";
    }
}
int main(){
    struct TreeNode *root= new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);
    cout<<"PreOrder Traversal is : \n";
    PreOrderTraversal(root);
    cout<<"InOrder Traversal is : \n";
    InOrderTraversal(root);
    cout<<"PostOrder Traversal is : \n";
    PostOrderTraversal(root);
}
