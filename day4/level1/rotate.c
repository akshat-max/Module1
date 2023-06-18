#include <stdio.h>
#include <string.h>

void rotate_string(char str[], int pos) {
    int len = strlen(str);
    pos = pos % len; 
    char temp[len];

    strncpy(temp, str, pos);
    memmove(str, str + pos, len - pos);
    strncpy(str + len - pos, temp, pos);
}

int main() {
    char string[] = "abcdxyz";
    int k = 2;

    rotate_string(string, k);
    printf("%s", string);

    return 0;
}
