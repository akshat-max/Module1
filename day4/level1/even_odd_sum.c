#include <stdio.h>

int Sum(int arr[], int length) {
    int i;
    int even_sum = 0;
    int odd_sum = 0;

    for (i = 0; i < length; i++) {
        if (arr[i] % 2 == 0) {
            even_sum += arr[i];
        } else {
            odd_sum += arr[i];
        }
    }

    return even_sum - odd_sum;
}

int main() {
    int my_array[] = {64,84,20,36,12,90,72,10,45,56};
    int array_length = sizeof(my_array) / sizeof(my_array[0]);
    int diff;

    diff = Sum(my_array, array_length);

    printf("Difference: %d\n", diff);

    return 0;
}
