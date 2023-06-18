#include <stdio.h>

void calculate_sum_and_average(int arr[], int length, int *sum, float *average) {
    int i;

    
    *sum = 0;
    for (i = 0; i < length; i++) {
        *sum += arr[i];
    }

    
    *average = (float)(*sum) / length;
}

int main() {
    int my_array[] = {1, 2, 3, 4, 5};
    int array_length = sizeof(my_array) / sizeof(my_array[0]);
    int sum_result;
    float average_result;

    calculate_sum_and_average(my_array, array_length, &sum_result, &average_result);

    printf("Sum: %d\n", sum_result);
    printf("Average: %.2f\n", average_result);

    return 0;
}
