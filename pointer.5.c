#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter full name: ");
    gets(name);

    int len = strlen(name);
    printf("Abbreviated form: ");
    printf("%c.", name[0]);

    for (int i = 0; i < len; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ')
            if (strchr(name + i + 1, ' ') != NULL)
                printf("%c.", name[i + 1]);
            else
                printf("%s", &name[i + 1]);
    }

    return 0;
}
