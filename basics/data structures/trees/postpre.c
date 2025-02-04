#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Define the structure for a node in the binary tree
struct Node {
    int data;
    struct Node *left, *right;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

// Function to insert an element into the binary tree
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) 
        return newNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);

    return root;
}

// Function to perform non-recursive pre-order traversal
void preOrder(struct Node* root) {
    if (root == NULL) return;

    struct Node* stack[MAX];
    int top = -1;
    stack[++top] = root;

    while (top >= 0) {
        struct Node* node = stack[top--];
        printf("%d ", node->data);

        if (node->right) stack[++top] = node->right;
        if (node->left) stack[++top] = node->left;
    }
}

// Function to perform non-recursive in-order traversal
void inOrder(struct Node* root) {
    struct Node* stack[MAX];
    int top = -1;
    struct Node* curr = root;

    while (curr != NULL || top >= 0) {
        while (curr != NULL) {
            stack[++top] = curr;
            curr = curr->left;
        }
        curr = stack[top--];
        printf("%d ", curr->data);
        curr = curr->right;
    }
}

// Function to perform non-recursive post-order traversal
void postOrder(struct Node* root) {
    if (root == NULL) return;

    struct Node* stack1[MAX];
    struct Node* stack2[MAX];
    int top1 = -1, top2 = -1;
    stack1[++top1] = root;

    while (top1 >= 0) {
        struct Node* node = stack1[top1--];
        stack2[++top2] = node;

        if (node->left) stack1[++top1] = node->left;
        if (node->right) stack1[++top1] = node->right;
    }

    while (top2 >= 0) {
        struct Node* node = stack2[top2--];
        printf("%d ", node->data);
    }
}

// Main function
int main() {
    struct Node* root = NULL;
    int choice, data;

    printf("Enter elements to create the binary tree (-1 to stop): ");
    while (1) {
        scanf("%d", &data);
        if (data == -1) break;
        root = insert(root, data);
    }

    while (1) {
        printf("\n1. Pre-order Traversal\n2. In-order Traversal\n3. Post-order Traversal\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Pre-order traversal: ");
                preOrder(root);
                printf("\n");
                break;
            case 2:
                printf("In-order traversal: ");
                inOrder(root);
                printf("\n");
                break;
            case 3:
                printf("Post-order traversal: ");
                postOrder(root);
                printf("\n");
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}