#include <stdio.h>

int main() {
    FILE *f;
    int roll;
    char name[30];
    char choice = 'y';

    f = fopen("student.csv", "w");
    fprintf(f, "RollNo,Name\n");

    while (choice == 'y' || choice == 'Y') {
        printf("Enter Roll No and Name: ");
        scanf("%d %s", &roll, name);
        fprintf(f, "%d,%s\n", roll, name);
        printf("Add more? (y/n): ");
        scanf(" %c", &choice);
    }

    fclose(f);
    printf("Data saved in student.csv (open in Excel)");
    return 0;
}
