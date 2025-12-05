#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BST {
private:
    Node* root;

    // Private helper function
    Node* searchHelper(Node* node, int value) {

        // If node NULL OR value found, return node
        if (node == nullptr || node->data == value)
            return node;

        // Value -> smaller, search left
        if (value < node->data)
            return searchHelper(node->left, value);
        // Else search right
        return searchHelper(node->right, value);
    }

public:
    // Constructor
    BST() {
        root = nullptr;
    }
    // Public function
    bool search(int value) {
        Node* result = searchHelper(root, value);
        return (result != nullptr);
    }
   
    void setRoot(Node* node) {
        root = node;
    }
};

int main() {
    BST tree;

    Node* root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);

    // Setting root of BST
    tree.setRoot(root);

    if (tree.search(30))
        cout << "Found\n";
    else
        cout << "Not Found\n";
    return 0;
}
