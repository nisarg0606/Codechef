#include <iostream>
using namespace std;

class Bank//class
{
    int acno;
    char name[50];
    long amount;

public:
    void OpenAccount()
    {
        cout << "Enter Account number: ";
        cin >> acno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Amount(Min 1000 RS: ): ";
        cin >> amount;
    }

    void ShowAccount()
    {
        cout << "Account Number: " << acno << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << amount << endl;
    }

    void Deposit()
    {
        long amt;
        cout << "Enter Amount You want to deposit: ";
        cin >> amt;
        if (amt < 0)
            cout << "Invalid Deposit...";
        else
        {
            cout << "Successfully Deposited";
            amount = amount + amt;
        }
    }

    void Withdaw()
    {
        long amt;
        cout << "Enter Amount You want to withdraw: ";
        cin >> amt;
        if (amt > amount)
        {
            cout << "Insufficient Balance" << endl;
        }
        else
        {
            amount -= amt;
            cout << "Successfully Withdrawed....";
        }
    }
    int Search(int); //prototype
};

int Bank::Search(int a)
{
    if (acno == a)
    {
        ShowAccount();
        return (1);
    }
    return 0;
}

int main()
{
    Bank AC[3];
    int ch, i, a, found = 0;
    for (i = 0; i <= 2; i++)
    {
        AC[i].OpenAccount();
    }

    do
    {
        cout << "\n\n1.Display All account";
        cout << "\n2. By Account no.";
        cout << "\n3. Deposit.";
        cout << "\n4. Withdraw.";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1: //display account info
            for (i = 0; i <= 2; i++)
            {
                AC[i].ShowAccount();
            }
            break;
        case 2: //Searching the record
            cout << "Account Number? ";
            cin >> a;
            for (i = 0; i <= 2; i++)
            {
                found = AC[i].Search(a);
                if (found)
                    break;
            }
            if (!found)
                cout << "Record Not found" << endl;
            break;
        case 3: //Deposit
            cout << "Enter Account Number you want to Deposit? ";
            cin >> a;
            for (i = 0; i <= 2; i++)
            {
                found = AC[i].Search(a);
                if (found)
                {
                    AC[i].Deposit();
                    break;
                }
            }
            if (!found)
                cout << "Record Not found" << endl;
            break;
        case 4:///withdraw
            cout << "Enter Account Number you want to Withdraw? ";
            cin >> a;
            for (i = 0; i <= 2; i++)
            {
                found = AC[i].Search(a);
                if (found)
                {
                    AC[i].Withdaw();
                    break;
                }
            }
            if (!found)
                cout << "Record Not found" << endl;
            break;
        case 5:
            cout << "Have a nice day...." << endl;
            break;
        default:
            cout << "Invalid Choice...." << endl;
        }
    } while (ch != 5);
    return 0;
}