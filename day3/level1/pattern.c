#include <stdio.h>

void printIncreasing(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

void printSpaces(int n) {
    for (int i = 1; i <= n; i++) {
        printf(" ");
    }
}

void printDecreasing(int n) {
    for (int i = n; i >= 1; i--) {
        printf("%d", i);
    }
}
int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    for (int i = n; i >= 1; i--) {
        printIncreasing(i);
        printSpaces(n - i);
        printDecreasing(i);
        printf("\n");
    }

    return 0;
}
