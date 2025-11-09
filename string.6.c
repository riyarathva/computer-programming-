#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50];
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    int result = strcmp(s1, s2);

    if (result == 0)
        printf("Both strings are same.");
    else if (result > 0)
        printf("First string is greater.");
    else
        printf("Second string is greater.");

    return 0;
}
