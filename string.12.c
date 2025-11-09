#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int a=0, e=0, i=0, o=0, u=0;

    printf("Enter a string: ");
    gets(str);

    for (int j = 0; str[j] != '\0'; j++) {
        char ch = tolower(str[j]);
        if (ch == 'a') a++;
        else if (ch == 'e') e++;
        else if (ch == 'i') i++;
        else if (ch == 'o') o++;
        else if (ch == 'u') u++;
    }

    printf("Frequency of vowels:\n");
    printf("A = %d\nE = %d\nI = %d\nO = %d\nU = %d\n", a, e, i, o, u);
    return 0;
}
