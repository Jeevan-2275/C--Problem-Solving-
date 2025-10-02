#include <iostream>
#include <queue>
#include <climits>
using namespace std;    

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = newNode->right = nullptr;
    return newNode;
}


void minMaxLevelOrder(Node* root) {
    if (root == nullptr) return;

    queue<Node*> q;
    q.push(root);
    int minValue = INT_MAX;
    int maxValue = INT_MIN;

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        // Update min and max values
        if (curr->data < minValue) {
            minValue = curr->data;
        }
        if (curr->data > maxValue) {
            maxValue = curr->data;
        }

        if (curr->left != nullptr)
            q.push(curr->left);
        if (curr->right != nullptr)
            q.push(curr->right);
    }

    cout << "Minimum Value: " << minValue << endl;
    cout << "Maximum Value: " << maxValue << endl;
}

int main() {
    Node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(20);
    root->left->left = createNode(3);
    root->left->right = createNode(7);
    root->right->right = createNode(30);

    minMaxLevelOrder(root);

    return 0;
}