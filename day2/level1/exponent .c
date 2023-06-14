#include <stdio.h>

void printExponent(double x) {
    unsigned long long *ptr = (unsigned long long *)&x; 
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;  

    
    printf("Hexadecimal: 0x%llX\n", exponent);

    
    printf("Binary: 0b");
    for (int i = 10; i >= 0; i--) {
        int bit = (exponent >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}
