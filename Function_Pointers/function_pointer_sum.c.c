#include <stdio.h>

// Function declaration
void sum(int i, int j);

int main() {
    int a, b;

    // Function pointer declaration and assignment
    void (*operation)(int, int) = &sum;

    // Call the function using the pointer
    operation(a, b);

    return 0;
}

// Function definition
void sum(int i, int j) {
    // Read values inside the function
    printf("Enter a: ");
    scanf("%d", &i);

    printf("Enter b: ");
    scanf("%d", &j);

    int s = i + j;
    printf("Sum is: %d\n", s);
}
