/*Write a function to find biggest of 2 numbers using 
    - if else
    - ternary operator*/

#include <stdio.h>

int findMaxIfElse(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}



int main() {
    int num1 = 10;
    int num2 = 20;

    int max1 = findMaxIfElse(num1, num2);
    printf("%d ", max1);

    

    return 0;
}