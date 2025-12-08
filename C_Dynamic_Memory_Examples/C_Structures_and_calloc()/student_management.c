#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int id;
    int age;
} t;

int main(void) {
    t *ptr;
    int n;

    printf("How many students do you want to enter: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }

    ptr = (t *)calloc(n, sizeof(t));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEnter info for student %d:\n", i + 1);

        printf("Enter Name: ");
        scanf(" %49s", ptr[i].name);

        printf("Enter ID: ");
        scanf("%d", &ptr[i].id);

        printf("Enter Age: ");
        scanf("%d", &ptr[i].age);
    }

    printf("\n--- Entered Student Information ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf(" Name: %s\n", ptr[i].name);
        printf(" ID: %d\n", ptr[i].id);
        printf(" Age: %d\n", ptr[i].age);
    }

    free(ptr);
    return 0;
}
