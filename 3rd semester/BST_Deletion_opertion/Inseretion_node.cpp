#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insertion(Node* root, int data) {
    if (root == nullptr) {
        return new Node{data, nullptr, nullptr};
    }
    
    if (data < root->data) {
        root->left = insertion(root->left, data);
    } else if (data > root->data) {
        root->right = insertion(root->right, data);
    }
    
    return root;
}

void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main() {
    Node* root = nullptr;
    int values[] = {50, 30, 20, 40, 70, 60, 80};
    
    for (int value : values) {
        root = insertion(root, value);
    }
    
    cout << "Inorder traversal of the BST: ";
    inorder(root);
    cout << endl;

    return 0;
}