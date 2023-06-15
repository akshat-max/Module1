#include <stdio.h>

void printBits(unsigned int num) {
    int i;

    for (i = 31; i >= 0; i--) {
        unsigned int bit = (num >> i) & 1;
        printf("%u", bit);
    }
}
int main() {
    unsigned int num;

    printf("Enter integer: ");
    scanf("%u", &num);

    printf("Bits: ");
    printBits(num);

    return 0;
}