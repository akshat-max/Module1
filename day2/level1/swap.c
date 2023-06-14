#include <stdio.h>

void swap(void *a, void *b, size_t size) {
    unsigned char *ptr_a = (unsigned char *)a;
    unsigned char *ptr_b = (unsigned char *)b;

    for (size_t i = 0; i < size; i++) {
        unsigned char temp = ptr_a[i];
        ptr_a[i] = ptr_b[i];
        ptr_b[i] = temp;
    }
}

int main() {
    int a = 5, b = 10;
   

    swap(&a, &b, sizeof(int));
    printf("%d,%d\n", a, b);

    double c = 3.14, d = 2.71;
    

    swap(&c, &d, sizeof(double));
    printf(" %f, %f\n", c, d);

    return 0;
}
