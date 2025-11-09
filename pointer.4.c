#include <stdio.h>

int main() {
    char books[3][50];
    char *ptr[3];

    printf("Enter 3 book names:\n");
    for (int i = 0; i < 3; i++) {
        gets(books[i]);
        ptr[i] = books[i];
    }

    printf("\nBooks you entered:\n");
    for (int i = 0; i < 3; i++)
        printf("%s\n", ptr[i]);

    return 0;
}
