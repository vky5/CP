#include <stdio.h>
#include <stdlib.h>

// Define the structure and simultaneously create an alias 'Node'
struct node {
    int data;
    struct node* next;
};

// Function for inserting a new node
void insertion(int num, struct node** Last, struct node** head) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if (!newNode){
        printf("Memory allocation failed!\n");
        return;
    }  

    newNode->data = num;
    newNode->next = NULL;

    if (*head==NULL){
        *head = newNode;
        *Last = newNode;
    }else{
        (*Last)->next = newNode;
        *Last = newNode;
    }
}

int main() {
    struct node* head = NULL, *tail = NULL; // Initialize an empty list
    return 0;
}
