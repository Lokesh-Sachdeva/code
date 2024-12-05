#include <iostream>
using namespace std;

struct Automobile {
    string type;
    string company;
    int yearOfMake;
    Automobile* left;
    Automobile* right;
};

class BST {
public:
    Automobile* root;
    BST() : root(nullptr) {}

    Automobile* createNode(string type, string company, int yearOfMake) {
        Automobile* newNode = new Automobile();
        newNode->type = type;
        newNode->company = company;
        newNode->yearOfMake = yearOfMake;
        newNode->left = newNode->right = nullptr;
        return newNode;
    }

    Automobile* insert(Automobile* node, string type, string company, int yearOfMake) {
        if (node == nullptr) {
            return createNode(type, company, yearOfMake);
        }
        if (yearOfMake < node->yearOfMake) {
            node->left = insert(node->left, type, company, yearOfMake);
        } else if (yearOfMake > node->yearOfMake) {
            node->right = insert(node->right, type, company, yearOfMake);
        }
        return node;
    }

    Automobile* findMin(Automobile* node) {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    Automobile* deleteNode(Automobile* node, int yearOfMake) {
        if (node == nullptr) {
            return node;
        }
        if (yearOfMake < node->yearOfMake) {
            node->left = deleteNode(node->left, yearOfMake);
        } else if (yearOfMake > node->yearOfMake) {
            node->right = deleteNode(node->right, yearOfMake);
        } else {
            if (node->left == nullptr) {
                Automobile* temp = node->right;
                delete node;
                return temp;
            } else if (node->right == nullptr) {
                Automobile* temp = node->left;
                delete node;
                return temp;
            }
            Automobile* temp = findMin(node->right);
            node->yearOfMake = temp->yearOfMake;
            node->type = temp->type;
            node->company = temp->company;
            node->right = deleteNode(node->right, temp->yearOfMake);
        }
        return node;
    }

    void inOrder(Automobile* node) {
        if (node == nullptr) {
            return;
        }
        inOrder(node->left);
        cout << node->yearOfMake << ": " << node->type << ", " << node->company << endl;
        inOrder(node->right);
    }

    void preOrder(Automobile* node) {
        if (node == nullptr) {
            return;
        }
        cout << node->yearOfMake << ": " << node->type << ", " << node->company << endl;
        preOrder(node->left);
        preOrder(node->right);
    }

    void postOrder(Automobile* node) {
        if (node == nullptr) {
            return;
        }
        postOrder(node->left);
        postOrder(node->right);
        cout << node->yearOfMake << ": " << node->type << ", " << node->company << endl;
    }
};

int main() {
    BST bst;
    bst.root = bst.insert(bst.root, "Sedan", "Toyota", 2010);
    bst.insert(bst.root, "SUV", "Ford", 2015);
    bst.insert(bst.root, "Truck", "Chevrolet", 2008);
    bst.insert(bst.root, "Convertible", "BMW", 2020);

    cout << "In-order Traversal:\n";
    bst.inOrder(bst.root);

    cout << "\nPre-order Traversal:\n";
    bst.preOrder(bst.root);

    cout << "\nPost-order Traversal:\n";
    bst.postOrder(bst.root);

    bst.root = bst.deleteNode(bst.root, 2010);
    cout << "\nIn-order Traversal after Deletion:\n";
    bst.inOrder(bst.root);

    return 0;
}
