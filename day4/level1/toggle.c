#include <stdio.h>

void toggle_case(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; 
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; 
        }
        i++;
    }
}

int main() {
    char my_string[] = "Hello World";

    toggle_case(my_string);

    printf("Toggled case string: %s", my_string);

    return 0;
}
