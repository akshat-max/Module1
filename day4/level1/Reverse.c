#include <stdio.h>

void reverse(int arr[], int length) {
    int start = 0;
    int end = length - 1;
    int temp;

    while (start < end) {
        
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

       
        start++;
        end--;
    }
}

int main() {
    int my_array[] = {64,84,20,36,12,90,72,10,45,56};
    int array_length = sizeof(my_array) / sizeof(my_array[0]);
    int i;

    reverse(my_array, array_length);
     
    for (i = 0; i < array_length; i++) {
        printf("%d ", my_array[i]);
    }

    return 0;
}
