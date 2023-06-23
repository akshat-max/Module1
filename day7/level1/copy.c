#include <stdio.h>

int main() {
    FILE *source, *final;
    char source[100], final[100];
    char ch;

    printf("file name: ");
    scanf("%s", source);

    source = fopen(source, "r");
    if (source == NULL) {
        printf("Error\n");
        return 1;
    }

    printf("final file name: ");
    scanf("%s", final);

    final = fopen(final, "w");
    if (final == NULL) {
        printf("Error in final file.\n");
        return 1;
    }

    
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, final);
    }

    fclose(source);
    fclose(final);

    printf("File copied successfully.\n");

    return 0;
}