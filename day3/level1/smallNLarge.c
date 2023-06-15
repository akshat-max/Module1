#include <stdio.h>

void find_smallest_and_largest_digits(int n, int numbers[]) {
    if (n <= 0) {
        printf("Not Valid\n");
        return;
    }

    int smallest = 9;
    int largest = 0;

    for (int i = 0; i < n; i++) {
        int number = numbers[i];

        while (number > 0) {
            int digit = number % 10;
            smallest = (digit < smallest) ? digit : smallest;
            largest = (digit > largest) ? digit : largest;
            number /= 10;
        }
    }

    printf("Smallest digit: %d\n", smallest);
    printf("Largest digit: %d\n", largest);
}

int main() {
    int numbers[] = {8, 156, 123450};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    find_smallest_and_largest_digits(n, numbers);

    return 0;
}
