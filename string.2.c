#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    printf("Enter a string: ");
    gets(str);

    strlwr(str); // built-in function (in Turbo C or some compilers)

    printf("Lowercase string: %s", str);
    return 0;
}
