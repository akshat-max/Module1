#include <stdio.h>

int find_largest_number(int number) {
    int largest_number = 0;
    int divisor = 1;

    while (divisor <= number) {
        int modified_number = (number / (divisor * 10)) * divisor + (number % divisor);
        if (modified_number > largest_number) {
            largest_number = modified_number;
        }
        divisor *= 10;
    }

    return largest_number;
}

int main() {
    int number = 5872 - 872;
    int largest = find_largest_number(number);
    printf("Largest number: %d\n", largest);

    return 0;
}
