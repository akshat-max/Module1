#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initialize(struct Student *stu, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Enter details for Student %d:\n", i + 1); 
        printf("Roll No: ");
        scanf("%d", &(stu[i].rollno));
        printf("Name: ");
        scanf("%s", stu[i].name);
        printf("Marks: ");
        scanf("%f", &(stu[i].marks));
        printf("\n");
    }
}


int main() {
    const int numStudents = 5;

    struct Student students[numStudents];

    initialize(students, numStudents);

    for (int i = 0; i < numStudents; i++) {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
