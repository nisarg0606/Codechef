#include<stdio.h>

void createaccount(int,int);
void deposit(int,int);
void withdraw(int,int);
void display(int);
int main()
{
    int accno,amount;
    printf("Enter account number: ");
    scanf("%d",&accno);
    printf("Enter amount: ");
    scanf("%d",&amount);
    createaccount(accno,amount);
    printf("\n\n");
    printf("Enter account number: ");
    scanf("%d",&accno);
    printf("Enter amount: ");
    scanf("%d",&amount);
    withdraw(accno,amount);
    printf("\n\n");
    printf("Enter account number: ");
    scanf("%d",&accno);
    printf("Enter amount: ");
    scanf("%d",&amount);
    deposit(accno,amount);
    printf("\n\n");
    display(accno);
    return 0;
}

void createaccount(int accno,int amount)
{
    printf("Account created successfully\n");
    printf("Account number: %d\n",accno);
    printf("Amount: %d\n",amount);
}

void deposit(int accno,int amount)
{
    printf("Deposit successful\n");
    printf("Account number: %d\n",accno);
    printf("Amount: %d\n",amount);
}

void withdraw(int accno,int amount)
{
    printf("Withdraw successful\n");
    printf("Account number: %d\n",accno);
    printf("Amount: %d\n",amount);
}