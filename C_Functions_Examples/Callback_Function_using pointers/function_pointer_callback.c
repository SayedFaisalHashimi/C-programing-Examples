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
int get_valid_int(const char *prompt);

int main() {
    int x, y;

    // Program introduction
    printf("\nThis program demonstrates callback functions using addition and subtraction.\n\n");

    // Get valid integer inputs
    x = get_valid_int("Enter number 1: ");
    y = get_valid_int("Enter number 2: ");

    // Using sum as a callback
    int summ=display(sum, x, y);

    // Using sub as a callback
    int subm=display(sub, x, y);

    // Print results
    // -------------------------
    printf("\nResults:\n");
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


/*
 * Function: get_valid_int
 * -----------------------
 * Reads user input and ensures that only valid integers are accepted.
 * If the input is invalid, the user is prompted again.
 *
 * Parameters:
 *   prompt - message displayed to the user
 *
 * Returns:
 *   A valid integer value entered by the user.
 */
int get_valid_int(const char *prompt) {
    int value;
    char ch;

    while (1) {
        printf("%s", prompt);
        if (scanf("%d", &value) == 1) {
            // Check if any extra invalid input follows the number
            while ((ch = getchar()) != '\n' && ch != EOF);
            return value;
        } else {
            // Clear invalid input
            printf("Invalid input! Please enter an integer.\n");
            while ((ch = getchar()) != '\n' && ch != EOF);
        }
    }
}
