#include <stdio.h>

int main() {
    FILE *f;
    char str[100];

    f = fopen("line.txt", "w");
    printf("Enter a line: ");
    gets(str);
    fputs(str, f);
    fclose(f);

    printf("Line written to file successfully!");
    return 0;
}
