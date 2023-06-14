#include <stdio.h>
#include <ctype.h>

int findCharacterType(char c) {
    int type;

    if (isalpha(c)) {
        if (isupper(c)) {
            type = 1; 
        } else {
            type = 2; 
        }
    } else if (isdigit(c)) {
        type = 3; 
    } else if (isprint(c)) {
        type = 4; 
    } else {
        type = 5; 
    }

    return type;
}

int main() {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);

    int result = findCharacterType(character);

    switch (result) {
        case 1:
            printf("Type: 'A' to 'Z'\n");
            break;
        case 2:
            printf("Type: 'a' to 'z'\n");
            break;
        case 3:
            printf("Type: '0' to '9'\n");
            break;
        case 4:
            printf("Type: Any other printable symbol\n");
            break;
        case 5:
            printf("Type: Non-printable symbol\n");
            break;
        default:
            printf("Invalid character\n");
    }

    return 0;
}
