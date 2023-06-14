#include <stdio.h>

char calculateGrade(int score) {
    
    if (score == 65) {
        printf("Grade A\n");
    } else if (score == 66) {
        printf("Grade B\n");
    } else if (score == 67) {
        printf("Grade C\n");
    } else if (score == 68) {
        printf("Grade D\n");
    } else if (score == 69) {
        printf("Grade E\n");
    } else if (score == 70) {
        printf("Grade F\n");
    }
    else if (score >= 90 && score <= 100) {
        printf("Grade A\n");
    } else if (score >= 75 && score <= 89) {
        printf("Grade B\n");
    } else if (score >= 60 && score <= 74) {
        printf("Grade C\n");
    } else if (score >= 50 && score <= 59) {
        printf("Grade D\n");
    } else if (score >= 36 && score <= 49) {
       printf("Grade E\n");
    } else if (score >= 0 && score <= 35) {
        printf("Grade F\n");
    } else {
        printf("Invalid score\n");
    }

    
}



int main() {
    int score;
    printf("Enter the student's score: ");
    scanf("%d", &score);

    calculateGrade(score);

    return 0;
}
