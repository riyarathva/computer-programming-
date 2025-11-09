#include <stdio.h>

struct Customer {
    int accno;
    char name[30];
    float balance;
};

void printLowBalance(struct Customer c[], int n) {
    printf("\nCustomers with balance below Rs.100:\n");
    for (int i = 0; i < n; i++)
        if (c[i].balance < 100)
            printf("%d  %s\n", c[i].accno, c[i].name);
}

void transaction(struct Customer c[], int n) {
    int accno, code;
    float amt;
    printf("\nEnter Account No, Amount and Code (1=Deposit, 0=Withdraw): ");
    scanf("%d %f %d", &accno, &amt, &code);

    for (int i = 0; i < n; i++) {
        if (c[i].accno == accno) {
            if (code == 1)
                c[i].balance += amt;
            else {
                if (c[i].balance < amt)
                    printf("The balance is insufficient for the specified withdrawal\n");
                else
                    c[i].balance -= amt;
            }
        }
    }
}

int main() {
    struct Customer c[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter AccNo, Name, Balance: ");
        scanf("%d %s %f", &c[i].accno, c[i].name, &c[i].balance);
    }

    printLowBalance(c, 3);
    transaction(c, 3);

    printf("\nUpdated Account Details:\n");
    for (int i = 0; i < 3; i++)
        printf("%d %s %.2f\n", c[i].accno, c[i].name, c[i].balance);

    return 0;
}
