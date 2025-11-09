#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    printf("Enter a string: ");
    gets(str);

    strupr(str);

    printf("Uppercase string: %s", str);
    return 0;
}
