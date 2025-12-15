#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *numbers;

    
    numbers = malloc(2 * sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    
    printf("Enter first number: ");
    scanf("%d", &numbers[0]);

    printf("Enter second number: ");
    scanf("%d", &numbers[1]);

    
    printf("Sum = %d\n", numbers[0] + numbers[1]);

    /* reallocation of memory */
    numbers = realloc(numbers, 3 * sizeof(int));
    if (numbers == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    
    numbers[2] = numbers[0] + numbers[1];

    printf("Stored sum in memory: %d\n", numbers[2]);

    /* free memory */
    free(numbers);

    return 0;
}
