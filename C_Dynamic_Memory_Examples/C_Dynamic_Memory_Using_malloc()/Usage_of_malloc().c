#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int *ptr;

    printf("Enter how many numbers you are gonna enter: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input for count.\n");
        return EXIT_FAILURE;
    }

    if (n <= 0) {
        printf("Count must be positive.\n");
        return EXIT_FAILURE;
    }

    /* allocate memory (no cast in C) and use safer sizeof *ptr idiom */
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Invalid memory");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        if (scanf("%d", ptr + i) != 1) {   /* check scanf result */
            printf("Invalid input for number %d.\n", i + 1);
            free(ptr);
            return EXIT_FAILURE;
        }
    }

    printf("\nYou entered:\n");
    for (int i = 0; i < n; i++) {
        printf("Number %d: %d\n", i + 1, ptr[i]); /* ptr[i] <=> *(ptr+i) */
    }

    free(ptr);
    return EXIT_SUCCESS;
}
