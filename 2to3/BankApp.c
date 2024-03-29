#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createAccount(int); //prototypes
void deposit(int);
void withdraw(int);
void display(int);
void modify(int);
void deleteAccount(int);
void displayAll();

int main()
{
    int ch, accno;
    while (1)
    {
        printf("\n\nMain Menu");
        printf("\n1. Create Account: ");
        printf("\n2. Deposit: ");
        printf("\n3. Withdraw: ");
        printf("\n4. Display Account: ");
        printf("\n5. Modify Account: ");
        printf("\n6. Delete Account: ");
        printf("\n7. Display All Accounts: ");
        printf("\n8. Exit: ");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter Account Number: ");
            scanf("%d", &accno);
            createAccount(accno);
            break;
        case 2:
            printf("\nEnter Account Number: ");
            scanf("%d", &accno);
            deposit(accno);
            break;
        case 3:
            printf("\nEnter Account Number: ");
            scanf("%d", &accno);
            withdraw(accno);
            break;
        case 4:
            printf("\nEnter Account Number: ");
            scanf("%d", &accno);
            display(accno);
            break;
        case 5:
            printf("\nEnter Account Number: ");
            scanf("%d", &accno);
            modify(accno);
            break;
        case 6:
            printf("\nEnter Account Number: ");
            scanf("%d", &accno);
            deleteAccount(accno);
            break;
        case 7:
            displayAll();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("\nInvalid Choice");
            break;
        }
    }
    return 0;
}

void createAccount(int accno)
{
    FILE *fp;
    char name[20], address[20], phone[20];
    float balance = 0;
    printf("\nEnter Name: ");
    scanf("%s", name);
    printf("\nEnter Address: ");
    scanf("%s", address);
    printf("\nEnter Phone Number: ");
    scanf("%s", phone);
    fp = fopen("BankApp.dat", "a");
    fprintf(fp, "%d %s %s %s %f\n", accno, name, address, phone, balance);
    fclose(fp);
}

void deposit(int accno)
{
    FILE *fp;
    int ac;
    char name[20], address[20], phone[20];
    float amount, balance;
    printf("\nEnter Amount: ");
    scanf("%f", &amount);
    fp = fopen("BankApp.dat", "r+");
    fseek(fp, 0, SEEK_SET);
    while(fscanf(fp, "%d %s %s %s %f\n", &ac, name, address, phone, &balance) != EOF)
    {
        if (ac == accno)
        {
            fprintf(fp, "%d %s %s %s %f\n", accno, name, address, phone, amount + balance);
            fclose(fp);
            printf("\nDeposit Successful");
            break;
        }
    }
    fclose(fp);
}

void withdraw(int accno){
    FILE *fp;
    float amount, amountbal;
    int ac;
    char name[20], address[20], phone[20];
    printf("\nEnter Amount: ");
    scanf("%f", &amount);
    fp = fopen("BankApp.dat", "r+");
    fseek(fp, 0, SEEK_SET);
    while(fscanf(fp, "%d %s %s %s %f\n", &ac, name, address, phone, &amountbal) != EOF)
    {
        if (ac == accno)
        {
            if (amountbal >= amount)
            {
                fprintf(fp, "%d %s %s %s %f\n", accno, name, address, phone, amountbal - amount);
                fclose(fp);
                printf("\nWithdraw Successful");
                break;
            }
            else
            {
                printf("\nInsufficient Balance");
                break;
            }
        }
    }
}

void display(int accno){
    FILE *fp;
    int ac;
    char name[20], address[20], phone[20];
    float balance;
    fp = fopen("BankApp.dat", "r");
    fseek(fp, 0, SEEK_SET);
    while (fscanf(fp, "%d %s %s %s %f\n", &ac, name, address, phone, &balance) != EOF)
    {
        if (ac == accno)
        {
            printf("\nAccount Number: %d", accno);
            printf("\nName: %s", name);
            printf("\nAddress: %s", address);
            printf("\nPhone Number: %s", phone);
            printf("\nBalance: %f", balance);
            break;
        }
    }
    fclose(fp);
}

void modify(int accno){

}
void deleteAccount(int accno){

}
void displayAll(){

}