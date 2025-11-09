#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    printf("Enter a string: ");
    gets(str);

    strrev(str);   // reverses the string

    printf("Reversed string: %s", str);
    return 0;
}
