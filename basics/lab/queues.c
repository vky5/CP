#include <stdio.h>
#include <stdlib.h>


int *rear (int *arrAddr, int add, int *size) {
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

int *front(int *arrAddr, int *size) {
    if (*size == 0) {
        printf("Queue is empty\n");
        return arrAddr;
    }
    printf("Removing element: %d\n", arrAddr[0]);

    for (int i = 1; i < *size; i++) {
        arrAddr[i - 1] = arrAddr[i];
    }

    int new_size = *size - 1;
    arrAddr = (int *)realloc(arrAddr, new_size * sizeof(int));
    
    if (arrAddr == NULL && new_size > 0) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    *size = new_size;

    for (int i = 0; i < *size; i++) {
        printf("%d ", arrAddr[i]);
    }
    printf("\n");
    
    return arrAddr;
}

int main(){

    int *ptr = NULL;
    int size = 0;

    ptr = rear(ptr, 4, &size);
    ptr = rear(ptr, 10, &size);
    ptr = rear(ptr, 15, &size);

    ptr = front(ptr, &size);
    ptr = front(ptr, &size);

    free(ptr);



    return 0;
}