#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
float divide(int a, int b) { return (float)a / b; }

int main() {
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("Sum = %d", add(a, b)); break;
        case 2: printf("Difference = %d", sub(a, b)); break;
        case 3: printf("Product = %d", mul(a, b)); break;
        case 4: printf("Quotient = %.2f", divide(a, b)); break;
        default: printf("Invalid choice");
    }
    return 0;
}
