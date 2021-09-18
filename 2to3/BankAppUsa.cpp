/*.
    Deposit
    Name
    Withdraw
    Balance
*/

#include <iostream>
using namespace std;

class Bank
{
    int acno;
    char name[50];
    long balance;

public:
    void OpenAccount()
    {
        cout << "Enter the account number: ";
        cin >> acno;
        cout << "Enter the name of the account holder: ";
        cin >> name;
        cout << "Enter a Balance(Min 1000): ";
        cin >> balance;
        if (balance < 1000)
        {
            cout << "Minimum Balance is 1000\n";
            OpenAccount();
        }
        else
            cout << "Account Opened\n";
    }
    void ShowAccount()
    {
        cout << "Account Number: " << acno << endl;
        cout << "Account Holder Name: " << name << endl;
        cout << "Account Balance: " << balance << endl;
    }
    void Deposit()
    {
        cout<<"Current balance is: "<<balance<<endl;
        long amt;
        cout << "Enter the amount to be deposited: ";
        cin >> amt;
        if (amt < 0)
        {
            cout << "Invalid Amount\n\n";
            Deposit();
        }
        else
        {
            balance += amt;
            cout<<"Deposited Successfully\n\n";
            cout<<"New Balance is: "<<balance<<endl;
        }
    }
    void Withdraw()
    {
        cout<<"Current balance is: "<<balance<<endl;
        long amt;
        cout << "Enter the amount to be withdrawn: ";
        cin >> amt;
        if (amt < 0)
        {
            cout << "Invalid Amount\n";
            Withdraw();
        }
        else if (amt > balance)
        {
            cout << "Insufficient Balance\n";
        }
        else
        {
            balance -= amt;
            cout<<"Withdrawn Successfully....";
            cout<<"New Balance is: "<<balance<<endl;
        }
    }
    int Search(int);
};
int Bank::Search(int acno)
{
    if (acno == this->acno)
    {
        return 1;
    }
    return 0;
}

int main()
{
    Bank obj[3];
    int choice, found = 0;
    for(int i=1;i<=3;i++)
    {
        obj[i].OpenAccount();
    }
    do
    {
        cout << "\n\nEnter 1 to show all accounts\n";
        cout << "Enter 2 to show an account\n";
        cout << "Enter 3 to deposit\n";
        cout << "Enter 4 to withdraw\n";
        cout << "Enter 5 to exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                for(int i=1;i<=3;i++)
                {
                    obj[i].ShowAccount();
                }
                break;
            case 2:
                cout << "Enter the account number: ";
                int ac;
                cin >> ac;
                for(int i=1;i<=3;i++)
                {
                    found = obj[i].Search(ac);
                    if(found == 1)
                    {
                        obj[i].ShowAccount();
                        break;
                    }
                }
                if(found == 0)
                {
                    cout << "Account not found\n";
                }
                break;
            case 3:
                cout << "Enter the account number you want to Deposit: ";
                cin>>ac;
                for(int i=1;i<=3;i++)
                {
                    found = obj[i].Search(ac);
                    if(found == 1)
                    {
                        obj[i].Deposit();
                        break;
                    }
                }
                if(found == 0)
                {
                    cout << "Account not found\n";
                }
                break;
            case 4:
                cout << "Enter the account number you want to Withdraw: ";
                cin>>ac;
                for(int i=1;i<=3;i++)
                {
                    found = obj[i].Search(ac);
                    if(found == 1)
                    {
                        obj[i].Withdraw();
                        break;
                    }
                }
                if(found == 0)
                {
                    cout << "Account not found\n";
                }
                break;
            case 5:
                cout<<"Have a nice day and visit us soon....";
                break;
            default:
                cout << "Invalid choice\n";
            break;
        }
        }while(choice != 5);
    return 0;
}