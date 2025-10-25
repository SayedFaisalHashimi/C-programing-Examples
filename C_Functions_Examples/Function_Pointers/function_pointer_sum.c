#include <stdio.h>

// Function declaration
int sum(int i, int j);

int main() {
    int a, b, s=0;

    // Function pointer declaration and assignment
    int (*operation)(int, int) = &sum;

    // Call the function using the pointer
    s=operation(a, b);

    printf("Sum is : %d\n", s); 

    return 0;
}

// Function definition
int sum(int i, int j) {
    // Read values inside the function
    printf("Enter a: ");
    scanf("%d", &i);

    printf("Enter b: ");
    scanf("%d", &j);

    int s = i + j;
    return s;
}
