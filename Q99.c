#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fptr;
    char ch;
    int count = 0;

    fptr = fopen("D:\\studentaih.txt", "r");
    if (fptr == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    while ((ch = getc(fptr)) != EOF) {
        printf("%c", ch);
        switch (toupper(ch)) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count++;
                break;
        }
    }
    printf("\nCount of vowels = %d\n", count);
    fclose(fptr);

    return 0;
}
