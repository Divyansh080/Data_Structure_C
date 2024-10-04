// https://filetransfer.io/data-package/z8yhbr18#link

// implementation of a Binary Search Tree (BST) with operations for insertion and preorder traversal.
#include <stdio.h>
#include <stdlib.h>

struct node {
    int key;
    struct node *left;
    struct node *right;
};

// Function to create a new node
struct node* createNode(int val) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->key = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node
struct node* insertNode(struct node *root, int val) {
    if (root == NULL) {
        return createNode(val);
    }

    if (val < root->key) {
        root->left = insertNode(root->left, val);
    } else if (val > root->key) {
        root->right = insertNode(root->right, val);
    }

    return root;
}


void preorder(struct node *root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->key);
    preorder(root->left);
    preorder(root->right);
}

// Main function
int main() {
    struct node *root = NULL;
    int data;
    char ch;

    do {
        printf("\nSelect one of the operations:\n");
        printf("1. Insert a new node\n");
        printf("2. Display nodes (preorder traversal)\n");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter value: ");
                scanf("%d", &data);
                root = insertNode(root, data);
                break;

            case 2:
                printf("\nPreorder traversal of the binary tree:\n");
                preorder(root);
                break;

            default:
                printf("Wrong entry. Please try again.\n");
                break;
        }

        printf("\nDo you want to continue (Type y or n)? ");
        getchar();
        scanf("%c", &ch);
    } while (ch == 'Y' || ch == 'y');

    return 0; // Exit the program
}
