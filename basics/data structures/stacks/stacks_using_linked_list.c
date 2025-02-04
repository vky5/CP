#include <cstddef>
#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

// this data type is struct node if want to use
// typedef struct node nodeOfLinkedList;
void push() {}
void pop() {}
void isEmpty() {}
void isFull() {}
void peek() {}

void insertion(int num, struct node **top,
               struct node **head) { // we are passing pointers of top and head
                                     // and then passing it by reference
  struct node *newNode = (struct node *)malloc(sizeof(struct node));

  if (!newNode) {
    printf("memory allocation failed!\n");
    return;
  }

  newNode->value = num;
  newNode->next = NULL;

  if (*head == NULL) {
    *head = newNode;
    *top = newNode;
  } else {
    (*top)->next = newNode;
    *top = newNode;
  }
}

void deletion

int main() {
  struct node *head = NULL, *top = NULL; // initializing both with null ptr
  return 0;
}
