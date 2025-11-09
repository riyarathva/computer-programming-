#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[50];
    char course[50];
    char major[50];
    char minor[50];
};

int main() {
    struct Student s[10];
    int i, roll;

    // Input details of 10 students
    for (i = 0; i < 10; i++) {
        printf("Enter Roll No, Name, Course, Major, Minor: ");
        scanf("%d", &s[i].rollno);
        scanf("%s %s %s %s", s[i].name, s[i].course, s[i].major, s[i].minor);
    }

    printf("\nNames of all students:\n");
    for (i = 0; i < 10; i++)
        printf("%s\n", s[i].name);

    printf("\nEnter Roll No to search: ");
    scanf("%d", &roll);

    for (i = 0; i < 10; i++) {
        if (s[i].rollno == roll) {
            printf("\nStudent Found:\n");
            printf("Name: %s\nCourse: %s\nMajor: %s\nMinor: %s", s[i].name, s[i].course, s[i].major, s[i].minor);
        }
    }
    return 0;
}
