#include <stdio.h>

void min_max(int arr[], int length, int *min, int *max) {
    int i;

    
    *min = arr[0];
    *max = arr[0];

    
    for (i = 1; i < length; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int my_array[] = {64,84,20,36,12,90,72,10,45,56};
    int array_length = sizeof(my_array) / sizeof(my_array[0]);
    int min_result;
    int max_result;

    min_max(my_array, array_length, &min_result, &max_result);

    printf("Min: %d\n", min_result);
    printf("Max: %d\n", max_result);

    return 0;
}
