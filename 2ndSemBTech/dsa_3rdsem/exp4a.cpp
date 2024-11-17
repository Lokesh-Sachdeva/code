#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    Node* root;
    BinaryTree() : root(nullptr) {}

    Node* insert(Node* node, int value) {
        if (node == nullptr) return new Node(value);
        if (value < node->data)
            node->left = insert(node->left, value);
        else
            node->right = insert(node->right, value);
        return node;
    }

    int findHeight(Node* node) {
        if (node == nullptr) return 0;
        int leftHeight = findHeight(node->left);
        int rightHeight = findHeight(node->right);
        return max(leftHeight, rightHeight) + 1;
    }
};

int main() {
    BinaryTree tree;
    tree.root = tree.insert(tree.root, 10);
    tree.insert(tree.root, 5);
    tree.insert(tree.root, 15);
    tree.insert(tree.root, 3);
    tree.insert(tree.root, 7);
    tree.insert(tree.root, 12);
    tree.insert(tree.root, 18);

    int height = tree.findHeight(tree.root);
    cout << "Height of the binary tree: " << height << endl;

    return 0;
}
