#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Create new node
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

// Delete the deepest node
void deleteDeepest(Node* root, Node* delNode) {
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp->left) {
            if (temp->left == delNode) {
                temp->left = nullptr;
                delete delNode;
                return;
            } else {
                q.push(temp->left);
            }
        }

        if (temp->right) {
            if (temp->right == delNode) {
                temp->right = nullptr;
                delete delNode;
                return;
            } else {
                q.push(temp->right);
            }
        }
    }
}

// Delete a node by key
void deleteNode(Node* root, int key) {
    if (root == nullptr) return;

    if (root->left == nullptr && root->right == nullptr) {
        if (root->data == key) {
            delete root;
            root = nullptr;
        }
        return;
    }

    queue<Node*> q;
    q.push(root);

    Node* temp = nullptr;
    Node* keyNode = nullptr;

    while (!q.empty()) {
        temp = q.front();
        q.pop();

        if (temp->data == key)
            keyNode = temp;

        if (temp->left) q.push(temp->left);
        if (temp->right) q.push(temp->right);
    }

    if (keyNode) {
        int x = temp->data; // value of deepest node
        deleteDeepest(root, temp);
        keyNode->data = x;
    }
}

// In-order traversal
void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    // Build tree
    Node* root = createNode(10);
    root->left = createNode(11);
    root->left->left = createNode(7);
    root->left->right = createNode(12);
    root->right = createNode(9);
    root->right->left = createNode(15);
    root->right->right = createNode(8);

    cout << "In-order before deletion: ";
    inorder(root);
    cout << endl;

    int key = 11;
    deleteNode(root, key);

    cout << "In-order after deleting " << key << ": ";
    inorder(root);
    cout << endl;

    return 0;
}
