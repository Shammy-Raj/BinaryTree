#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int data;
    struct TreeNode *left,*right;
    TreeNode(int data){
    this->data=data;
    left=right=NULL;
    }
};
void InOrderIterative(TreeNode* root){
    stack<TreeNode *>s;
    if(root==NULL) return;
    TreeNode* node=root;
    while(node!= NULL || s.empty()==false){
        while(node!=NULL){
            s.push(node);
            node=node->left;
        }
        node=s.top();
        s.pop();
        cout<<node->data<<" ";
        node=node->right;
    }
}

void PreOrderIterative(TreeNode* root){
if(root==NULL) return;

stack<TreeNode*> s;
TreeNode* temp=root;
while(temp!=NULL || s.empty()==false){
    while(temp!=NULL){
        cout<<temp->data;
        s.push(temp);
        temp=temp->left;
    }
    temp=s.top();
    s.pop();
    temp=temp->right;
}
}

void PostOrderIterative(TreeNode* root){
    if(root==NULL) return;
    stack<TreeNode*> s1;
    stack<TreeNode*> s2;
    TreeNode* node=root;
    while(node!=NULL || s1.empty()==false){
        while(node!=NULL){
            s1.push(node);
            s2.push(node);
            node=node->right;
        }
        node=s1.top();
        s1.pop();
        node=node->left;
    }
    while(s2.empty()==false){
        TreeNode* temp=s2.top();
        cout<<temp->data<<" ";
        s2.pop();
    }
}

int main(){
    struct TreeNode *root= new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);
    //cout<<"InOrder Traversal is : \n";
    //InOrderIterative(root);
    //cout<<"PreOrder Traversal Iterative is : \n";
    //PreOrderIterative(root);
    cout<<"PostOrder Traversal is :\n";
    PostOrderIterative(root);
}
