#include <stdio.h>

struct student_data {
    int roll;
    char name[30];
    int phy, math, chem;
    int total;
};

int main() {
    struct student_data s;

    printf("Enter Roll No, Name, Marks of Physics, Maths, Chemistry: ");
    scanf("%d %s %d %d %d", &s.roll, s.name, &s.phy, &s.math, &s.chem);

    s.total = s.phy + s.math + s.chem;

    printf("\nStudent Information:\n");
    printf("Roll No: %d\nName: %s\nPhysics: %d\nMaths: %d\nChemistry: %d\nTotal: %d",
           s.roll, s.name, s.phy, s.math, s.chem, s.total);

    return 0;
}
