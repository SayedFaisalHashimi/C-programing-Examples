#include <stdio.h>

void odd(int n);
void even(int n);

void odd(int n) {
    if (n <= 0)
        return;
    printf("%d is odd\n", n);
    even(n - 1);  // indirect call
}

void even(int n) {
    if (n <= 0)
        return;
    printf("%d is even\n", n);
    odd(n - 1);   // indirect call
}

int main() {
    odd(5);
    return 0;
}
