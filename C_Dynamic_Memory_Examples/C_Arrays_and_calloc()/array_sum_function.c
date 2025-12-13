#include <stdio.h>

int calculateSum(int arr[], int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    return sum;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    
    // Calculate the number of elements in the array
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);
    
    printf("--- Array Elements ---\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Element %d: %d\n", i, numbers[i]);
    }

    // Call the function to get the sum
    int total = calculateSum(numbers, arraySize);
    
    printf("\n--- Result ---\n");
    printf("The total sum of all elements in the array is: %d\n", total);

    return 0;
}
