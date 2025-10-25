#include <stdio.h>

/*
 * File: callback_function_example.c
 * Description:
 *   Demonstrates using a function pointer as a callback in C.
 *   The display function accepts a callback function and executes it.
 */

void sum(int a, int b);
void sub(int a, int b);
void display(void (*callback)(int, int), int a, int b);

int main() {
    int x = 10, y = 5;

    // Using sum as a callback
    display(sum, x, y);

    // Using sub as a callback
    display(sub, x, y);

    return 0;
}

// Display function executes the callback
void display(void (*callback)(int, int), int a, int b) {
    callback(a, b);  // Call the function passed as argument
}

// Callback function: sum
void sum(int a, int b) {
    printf("Sum is: %d\n", a + b);
}

// Callback function: subtraction
void sub(int a, int b) {
    printf("Sub is: %d\n", a - b);
}
