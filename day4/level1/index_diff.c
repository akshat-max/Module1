#include <stdio.h>

int Difference(int arr[], int len) {
    int i;
    int even_sum = 0;
    int odd_sum = 0;

    for (i = 0; i < len; i++) {
        if (i % 2 == 0) {
            even_sum += arr[i];
        } else {
            odd_sum += arr[i];
        }
    }

    return even_sum - odd_sum;
}

int main() {
    int arr[] = {64,84,20,36,12,90,72,10,45,56};
    int array_length = sizeof(arr) / sizeof(arr[0]);
    int diff;

    diff = Difference(arr, array_length);

    printf("Difference of even and odd index: %d", diff);

    return 0;
}
