#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Create a new node
Node* createNode(int value) {
    Node* newNode = new Node();

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Insert a node into BST
Node* insert(Node* root, int value) {

    // If tree is empty
    if (root == NULL) {
        return createNode(value);
    }

    // Insert in left subtree
    if (value < root->data) {
        root->left = insert(root->left, value);
    }

    // Insert in right subtree
    else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

// Inorder traversal
void inorder(Node* root) {

    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(Node* root) {

    if (root == NULL)
        return;

  cout << root->data << " ";
  preorder(root->left);
   preorder(root->right);
}

// Search an element
bool search(Node* root, int value) {

    if (root == NULL)
        return false;

    if (root->data == value)
        return true;

    if (value < root->data)
        return search(root->left, value);

    return search(root->right, value);
}

int main() {

    Node* root = NULL;

    // Insert elements
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    // Display BST
    cout << "Inorder Traversal: ";
    inorder(root);

    // Search
    int value = 40;

    if (search(root, value))
        cout << "\n" << value << " found in BST";
    else
        cout << "\n" << value << " not found in BST";

    return 0;
}
