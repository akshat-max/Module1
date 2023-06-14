/*Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary.*/
#include <stdio.h>

int main() {
    int rollNo;
    char name[100];
    float physics, math, chemistry;
    float total, percentage;

    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Marks of Physics: ");
    scanf("%f", &physics);

    printf("Enter Marks of Math: ");
    scanf("%f", &math);

    printf("Enter Marks of Chemistry: ");
    scanf("%f", &chemistry);

    total = physics + math + chemistry;
    percentage = (total / 300) * 100;

    printf("\nStudent Summary \n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics: %.2f\n", physics);
    printf("Math: %.2f\n", math);
    printf("Chemistry: %.2f\n", chemistry);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
