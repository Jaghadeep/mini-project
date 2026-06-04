#include <stdio.h>

int main()
{
    float balance = 1000.0;
    float amount;
    int choice;

    printf("Initial Balance = %.2f\n", balance);

    printf("\n1. Deposit\n");
    printf("2. Withdraw\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter amount to deposit: ");
        scanf("%f", &amount);

        balance = balance + amount;

        printf("Amount Deposited Successfully\n");
        printf("Current Balance = %.2f\n", balance);
    }
    else if(choice == 2)
    {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);

        if(amount <= balance)
        {
            balance = balance - amount;

            printf("Amount Withdrawn Successfully\n");
            printf("Current Balance = %.2f\n", balance);
        }
        else
        {
            printf("Insufficient Balance\n");
        }
    }
    else
    {
        printf("Invalid Choice\n");
    }

    return 0;
}