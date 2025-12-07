#include <stdio.h>
#include <stdlib.h>

void print_total(int total);

int main(void) {
    int n, total = 0;
    int *ptr;

    printf("How many numbers do you want to add: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number count.\n");
        return 1;
    }

    /* allocate memory for n integers */
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &ptr[i]);
        total += ptr[i];
    }

    print_total(total);

    free(ptr);
    return 0;
}

void print_total(int total) {
    printf("Total is: %d\n", total);
}
