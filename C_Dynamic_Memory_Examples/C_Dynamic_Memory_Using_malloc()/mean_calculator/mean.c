#include <stdio.h>
#include <stdlib.h>

void mean(int total, int n);

int main(void)
{
    int n;
    int total = 0;
    int *ptr = NULL;

    printf("Please enter value for N: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Error: Invalid N value.\n");
        return 1;
    }

    ptr = malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        if (scanf("%d", &ptr[i]) != 1)
        {
            printf("Error: Invalid input.\n");
            free(ptr);
            return 1;
        }
        total += ptr[i];
    }

    mean(total, n);

    free(ptr);
    return 0;
}

void mean(int total, int n)
{
    double mean = (double)total / n;
    printf("Mean = %.2f\n", mean);
}
