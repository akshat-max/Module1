#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void descending(struct Student* students, int numStudents) {
    int i, j;
    struct Student temp;
    for (i = 0; i < numStudents - 1; i++) {
        for (j = 0; j < numStudents - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}
void main() {
    const int numStudents = 5;
    struct Student students[numStudents];
    int i, n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Enter the student details:\n");
    for (i = 0; i < n; ++i) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }
    descending(students, n);
    printf(" descending order:\n");
    for (i = 0; i < n; ++i) {
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }
}