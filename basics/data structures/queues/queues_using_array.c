#include <stdio.h>

void enqueue(int qu[], int *top, int n, int value, int *front) {
    if (*top < n - 1) {  // Check if there is space in the queue
        if (*front == -1) {  // If it's the first element being added
            *front = 0;
        }
        (*top)++;  // Increment top first
        qu[*top] = value;  // Insert value at top
    } else {
        printf("Queue is full\n");
    }
}

void dequeue(int qu[], int *front, int *top) {
    if (*front != -1 && *front <= *top) {
        printf("%d\n", qu[*front]);  // Print front value
        qu[*front] = 0;  // Clear the front value
        
        
        if (*front == *top) {
            *front = -1;  // Reset front if the queue is empty
            *top = -1;  // Reset top if the queue is empty
        }
        else {
            (*front)++;  // Move front forward
        }
    } else {
        printf("Queue is empty\n");
    }
}

void peek(int qu[], int front) {
    if (front == -1) return;
    printf("%d\n", qu[front]);
}

void display(int qu[], int front, int top) {
    for (int i = front; i <= top; i++) {
        printf("%d ", qu[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the size of the queue: ");
    scanf("%d", &n);

    int queue[n];
    int front = -1; // stores the index of first position
    int top = -1; // the index of the current top position

    // Example operations on the queue
    enqueue(queue, &top, n, 10, &front);  // Enqueue 10
    display(queue, front, top);  // Display queue
    dequeue(queue, &front, &top);  // Dequeue one element
    display(queue, front, top);  // Display queue

    return 0;
}
