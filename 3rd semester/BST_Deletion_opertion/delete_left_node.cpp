#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

// Insert node in BST
Node* insert(Node* root, int value) {
    if (root == NULL)
        return new Node(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

// Inorder Traversal
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Search node in BST
Node* search(Node* root, int key) {
    while (root != NULL) {
        if (root->data == key)
            return root;
        else if (key < root->data)
            root = root->left;
        else
            root = root->right;
    }
    return NULL;
}

// Find minimum value node in right subtree (for delete)
Node* findMin(Node* root) {
    while (root->left != NULL)
        root = root->left;
    return root;
}

// Delete a node from BST
Node* deleteNode(Node* root, int key) {
    if (root == NULL) return NULL;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        // Node found
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
        else if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else {
            Node* minNode = findMin(root->right);
            root->data = minNode->data;
            root->right = deleteNode(root->right, minNode->data);
        }
    }
    return root;
}

// Find largest node in left subtree
Node* searchLeft(Node* root) {
    if (root == NULL || root->left == NULL)
        return NULL;

    Node* temp = root->left;
    while (temp->right != NULL)
        temp = temp->right;

    return temp;
}

// Find rightmost leaf (largest node)
Node* searchLeaf(Node* root) {
    if (root == NULL)
        return NULL;

    while (root->right != NULL)
        root = root->right;

    return root;
}

// Main Function
int main() {
    Node* root = NULL;

    // Inserting nodes
    int values[] = {50, 45, 55, 43, 46, 44, 48, 47, 49, 52, 51, 53};
    for (int val : values)
        root = insert(root, val);

    cout << "Inorder before deletion: ";
    inorder(root);
    cout << endl;

    // Delete node 49
    root = deleteNode(root, 49);

    cout << "Inorder after deleting 49: ";
    inorder(root);
    cout << endl;

    // Search for 46
    Node* result = search(root, 46);
    if (result)
        cout << "Node 46 found!" << endl;
    else
        cout << "Node 46 not found!" << endl;

    // Largest node in left subtree
    Node* leftNode = searchLeft(root);
    if (leftNode)
        cout << "searchLeft(): " << leftNode->data << endl;
    else
        cout << "searchLeft(): NULL" << endl;

    // Rightmost (largest) node
    Node* leafNode = searchLeaf(root);
    if (leafNode)
        cout << "searchLeaf(): " << leafNode->data << endl;
    else
        cout << "searchLeaf(): NULL" << endl;

    return 0;
}
