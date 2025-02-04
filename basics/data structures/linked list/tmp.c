#include <stdio.h>
#include <stdlib.h>

// Define the structure and simultaneously create an alias 'Node'
struct node {
  int data;
  struct node *next;
};

// Function for inserting a new node
void insertion(int num, struct node **Last, struct node **head) {
  struct node *newNode = (struct node *)malloc(sizeof(struct node));
  if (!newNode) {
    printf("Memory allocation failed!\n");
    return;
  }

  newNode->data = num;
  newNode->next = NULL;

  if (*head == NULL) {
    *head = newNode;
    *Last = newNode;
  } else {
    (*Last)->next = newNode;
    *Last = newNode;
  }
}

void deletion(int *top, struct node **head, int n) {
  if (n == 0) { // which means delete first position
    struct node* tmp = *head;
    
    
  } else if (n == -1) { // delete last position

  } else if (n < 0 && n > (*top)) { // deleting n from the middle

  } else {
    printf("Not a valid position");
  }
}

int main() {
  struct node *head = NULL, *tail = NULL; // Initialize an empty list
  int top = 0;
  return 0;
}
