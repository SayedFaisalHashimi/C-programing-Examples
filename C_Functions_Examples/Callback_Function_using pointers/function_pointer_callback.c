#include <stdio.h>

/*
 * File: callback_function_example.c
 * Description:
 *   Demonstrates using a function pointer as a callback in C.
 *   The display function accepts a callback function and executes it.
 */

int sum(int a, int b);
int sub(int a, int b);
int display(int (*callback)(int, int), int a, int b);

int main() {
    int x = 10, y = 5;

    // Using sum as a callback
    int summ=display(sum, x, y);

    // Using sub as a callback
    int subm=display(sub, x, y);

    // Print results
    // -------------------------
    printf("Sum is: %d\n", summ);
    printf("Sub is: %d\n", subm);

    return 0;
}

// Display function executes the callback
int display(int (*callback)(int, int), int a, int b) {

    int t=callback(a, b);  // Call the function passed as argument
    return t;
}

// Callback function: sum
int sum(int a, int b) {
    return a+b;
}

// Callback function: subtraction
int sub(int a, int b) {
    return a-b;
}
