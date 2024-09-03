#include <stdio.h>
#include <stdlib.h>

int *push(int *arrAddr, int add, int *size) {
    int new_size = *size + 1;
    arrAddr = (int *)realloc(arrAddr, new_size * sizeof(int));
    arrAddr[*size] = add;
    
    *size = new_size;
    
    for (int i = 0; i < *size; i++) {
        printf("%d ", arrAddr[i]);
    }
    printf("\n");
    
    return arrAddr;
}

void top(int *arrAddr, int *size) {
    if (*size > 0) {
        printf("%d\n", arrAddr[*size - 1]);
    } else {
        printf("Stack is empty\n");
    }
}

int *pop(int *arrAddr, int *size) {
    if (*size == 0) {
        printf("Stack is empty\n");
        return arrAddr;
    } else {
        printf("%d\n", arrAddr[*size - 1]);
        int new_size = *size - 1;
        arrAddr = (int *)realloc(arrAddr, new_size * sizeof(int));
        *size = new_size;

        for (int i = 0; i < *size; i++) {
            printf("%d ", arrAddr[i]);
        }
        printf("\n");
    
        return arrAddr;
    }
}

int main() {
    int *ptr = NULL; 
    int size = 0;   

    ptr = push(ptr, 4, &size);
    ptr = push(ptr, 10, &size);
    ptr = push(ptr, 15, &size);

    top(ptr, &size);
    ptr = pop(ptr, &size);
    top(ptr, &size);

    while (true)

    free(ptr);

    return 0;
}
