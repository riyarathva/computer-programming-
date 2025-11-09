#include <stdio.h>
int main() {
    printf("ASCII values from A to Z:\n");
    for(char ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c = %d\n", ch, ch);
    }
    return 0;
}
