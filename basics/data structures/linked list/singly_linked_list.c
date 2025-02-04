#include <cstddef>
#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

void insertion(struct node **head, struct node **tail, int value, int *last) {
  // first check if the memory allows to create new node
  struct node *newNode = (struct node *)malloc(sizeof(struct node));

  if (!newNode) {
    printf("failed to create new node\n");
    return;
  }

  newNode->value = value;
  newNode->next = NULL;

  if (*head == NULL) {
    *head = newNode;
    *tail = newNode;
  } else {
    (*tail)->next = newNode;
    *tail = newNode;
  }

  (*last)++;
}

void deletion(struct node **head, struct node **tail, int *numbersOfNodes,
              int pos) {
  if (*head == NULL) {
    printf("Linked list is empty\n");
    return;
  }

  if (pos == 0) { // which means delte the node that is pointing to head
    struct node *tmpNode = *head;
    // update head with the next node
    *head = tmpNode->next;
    free(tmpNode);
    (*numbersOfNodes)--;
    if (*numbersOfNodes == 0) { // If list becomes empty, reset tail
      *tail = NULL;
    }
  } else if (pos > 0 && pos < (*numbersOfNodes)) {
    struct node *tmp = *head, *tmp2;

    int currPos = 0;
    // we go to one node before the node that is to be deleted
    while (tmp->next != NULL && currPos != pos - 1 &&
           currPos <= (*numbersOfNodes)) {
      tmp = tmp->next;
      currPos++;
    }

    tmp = tmp->next->next;
    tmp2 = tmp->next;
    free(tmp2);

    if (tmp->next == NULL) { // Update tail if deleting the last node
      *tail = tmp;
    }

  } else if (pos == (*numbersOfNodes)) {
    struct node *tmp = *head, *tmp2;

    // move to last 2nd node
    while (tmp->next != (*tail)) {
      tmp = tmp->next;
    }

    // assing last 2nd node to null
    tmp->next = NULL;

    // free the empty node
    tmp2 = *tail;
    free(tmp2);

    // update the last node
    *tail = tmp;
    (*numbersOfNodes)--;

  } else {
    printf("Not a valid position is passed");
  }
}

int main() {
  struct node *head = NULL, *tail = NULL;
  int n = -1; // just like in array indexes are starting from 0 not 1
  return 0;
}
