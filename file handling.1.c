#include <stdio.h>

int main() {
    FILE *f;
    char ch;
    int lines = 0, words = 0, chars = 0, spaces = 0;

    f = fopen("file.txt", "r");
    if (f == NULL) {
        printf("File not found!");
        return 0;
    }

    while ((ch = fgetc(f)) != EOF) {
        chars++;
        if (ch == ' ') spaces++;
        if (ch == '\n') lines++;
        if (ch == ' ' || ch == '\n') words++;
    }

    fclose(f);

    printf("Lines: %d\nWords: %d\nChars: %d\nSpaces: %d", lines, words, chars, spaces);
    return 0;
}
