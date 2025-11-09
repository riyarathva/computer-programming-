#include <stdio.h>
#include <string.h>

struct Cricketer {
    char name[30];
    int age, matches;
    float avg;
};

int main() {
    struct Cricketer c[3], temp;
    int i, j;

    for (i = 0; i < 3; i++) {
        printf("Enter Name, Age, Matches, Average Runs: ");
        scanf("%s %d %d %f", c[i].name, &c[i].age, &c[i].matches, &c[i].avg);
    }

    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 3; j++) {
            if (c[i].avg > c[j].avg) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    printf("\nCricketers Sorted by Average Runs:\n");
    for (i = 0; i < 3; i++)
        printf("%s %d %d %.2f\n", c[i].name, c[i].age, c[i].matches, c[i].avg);

    return 0;
}
