#include<iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

node *createNode(int value){
    node *newNode = new node();
    newNode->data = value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

node *insert(node* root,int value){
    if(root==NULL){
        return createNode(value);
    }
    if(value<root->data){
        root->left = insert(root->left,value);
    }
    if(value>root->data){
        root->right = insert(root->right,value);
    }
    return root;
}



node *search(node *root,int value){
    if(root==NULL || root->data==value){
        return root;
    }
    if(value<root->data){
        return search(root->left,value);
    }
    if(value>root->data){
        return search(root->right,value);
    }
}

node *inorder(node *root){
    if(root != NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);

    }
}

node *postorder(node *root){
    if(root !=NULL){
        postorder(root->left);

        postorder(root->right);

        cout<<root-data<<" ";
    }
    
}

int main()
{
    node* root = NULL;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    

    return 0;
}