#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50];
    printf("Enter a string: ");
    gets(s1);

    strcpy(s2, s1);

    printf("Copied string: %s", s2);
    return 0;
}
