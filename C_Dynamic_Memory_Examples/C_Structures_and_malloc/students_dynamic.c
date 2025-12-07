#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int age;
} Student;

int main(void) {
    int n;
    Student *students;

    printf("How many students? ");
    scanf("%d", &n);

    students = (Student*)malloc(n * sizeof(Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter age for student %d: ", i + 1);
        scanf("%d", &students[i].age);
    }

    printf("\nStudent List:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: %s, Age: %d\n", i + 1, students[i].name, students[i].age);
    }

    free(students);
    return 0;
}
