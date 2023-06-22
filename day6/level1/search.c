#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

int searchStudentByName(const struct Student* students, int size, const char* searchName) {
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            return i; 
        }
    }

    return -1; 
}

void displayStudent(const struct Student* student) {
    printf("Roll No: %d\n", student->rollno);
    printf("Name: %s\n", student->name);
    printf("Marks: %.2f\n", student->marks);
    printf("\n");
}

int main() {
    const int numStudents = 5;

    struct Student students[numStudents] = {
        {1001, "Aron", 78.5},
        {1002, "Bob", 92.0},
        {1003, "Charlie", 85.2},
        {1004, "David", 76.8},
        {1005, "Eva", 89.7}
    };

    const char* searchName = "Charlie";

    int index = searchStudentByName(students, numStudents, searchName);

    if (index != -1) {
        printf("Student found:\n");
        displayStudent(&students[index]);
    } else {
        printf("Student not found.\n");
    }

    return 0;
}
