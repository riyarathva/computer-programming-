#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    printf("Enter a string: ");
    gets(str);

    strrev(str);

    printf("Reversed string vertically:\n");
    for (int i = 0; str[i] != '\0'; i++)
        printf("%c\n", str[i]);

    return 0;
}
