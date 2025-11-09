#include <stdio.h>

int main() {
    FILE *f;
    char str[100];

    f = fopen("line.txt", "r");
    if (f == NULL) {
        printf("File not found!");
        return 0;
    }

    while (fgets(str, 100, f) != NULL)
        printf("%s", str);

    fclose(f);
    return 0;
}
