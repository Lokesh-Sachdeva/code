// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
// int data;
// struct node* left;
// struct node* right;
// };

// void inordertraversal(struct node* root){
// if (root== NULL)
// {
// return;
// }
// inordertraversal(root->left);
// printf("%d",root->data);
// inordertraversal(root->right);
// }

// void preordertraversal(struct node* root){
// if (root== NULL)
// {
// return;
// }
// printf("%d",root->data);
// preordertraversal(root->left);
// preordertraversal(root->right);
// }

// void postordertraversal(struct node* root){
// if (root== NULL)
// {
// return;
// }
// postordertraversal(root->left);
// postordertraversal(root->right);
// printf("%d",root->data);
// }

// struct Node* newNode(int data) {
// struct Node* node = (struct node*)malloc(sizeof(struct node));
// node->data = data;
// node->left = NULL;
// node->right = NULL;
// return node;
// }

// int main() {
// struct Node* root = newNode(1);
// root->left = newNode(2);
// root->right = newNode(3);
// root->left->left = newNode(4);
// root->left->right = newNode(5);
// preordertraversal(root);
// inordertraversal(root);
// postordertraversal(root);
// return 0;
// }

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

void inordertraversal(struct node* root) {
    if (root == NULL) {
        return;
    }
    inordertraversal(root->left);
    printf("%d ", root->data);
    inordertraversal(root->right);
}

void preordertraversal(struct node* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    preordertraversal(root->left);
    preordertraversal(root->right);
}

void postordertraversal(struct node* root) {
    if (root == NULL) {
        return;
    }
    postordertraversal(root->left);
    postordertraversal(root->right);
    printf("%d ", root->data);
}

struct node* newNode(int data) {
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int main() {
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    printf("Inorder traversal: ");
    inordertraversal(root);
    printf("\n");

    printf("Preorder traversal: ");
    preordertraversal(root);
    printf("\n");

    printf("Postorder traversal: ");
    postordertraversal(root);
    printf("\n");

    return 0;
}
