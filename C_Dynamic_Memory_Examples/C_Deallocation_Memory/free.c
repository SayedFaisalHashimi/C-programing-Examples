#include <stdio.h>
#include <stdlib.h>

int *display() {
    int i, *ptr;
    // Allocating memory for 3 integers on the HEAP
    ptr = (int*)malloc(3 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    printf("\nEnter the 3 values: ");
    for (i = 0; i < 3; i++) {
        scanf("%d", (ptr + i));
    }

    // Returning the address of the HEAP memory
    return ptr;
}

int main() {
    int i, *ptr1;

    // ptr1 now points to the memory allocated inside display()
    ptr1 = display();

    if (ptr1 != NULL) {
        printf("\nPrinting values in main (proving memory persists): \n");
        for (i = 0; i < 3; i++) {
            printf("Value at index %d: %d\n", i, *(ptr1 + i));
        }

        // IMPORTANT: In professional engineering, always free what you malloc
        free(ptr1); 
        printf("\nMemory has been manually released.");
    }

    return 0;
}
