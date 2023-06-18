#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "12345";
    long int num;
    char *endptr;

    num = strtol(str, &endptr, 10);
    
    printf("Int: %ld\n", num);

    return 0;
}
