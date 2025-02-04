
#include <stdio.h>

int isEmpty(int top) {
    return top == -1;
}

int isFull(int top, int size) {
    return top == size - 1;
}

void display(int arr[], int top) {
    for (int i = top; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int peek(int top, int arr[]) {
    return arr[top];
}

void push(int arr[], int *top_var, int value, int size) {
    if (*top_var < size - 1) { // Check if there is space in the stack
        (*top_var)++;
        arr[*top_var] = value;
    } else {
        printf("Stack is full\n");
    }
}

void pop(int arr[], int *top_var) {
    if (*top_var == -1) {
        printf("Empty stack\n");
        return;
    }

    printf("%d\n", arr[*top_var]);  // Print the top element
    arr[*top_var] = 0;  // Optional: Clear the top element
    (*top_var)--;  // Decrease the top index
}

int main() {
    int n;
    printf("Enter the size of the stack: ");
    scanf("%d", &n);
    
    int stack[n];  // Declare the stack array
    int top = -1;  // Initialize top index as -1 (empty stack)
    
    // Example operations on the stack
    push(stack, &top, 10, n);  // Push 10 onto the stack
    display(stack, top);  // Display the stack

    return 0;
}
