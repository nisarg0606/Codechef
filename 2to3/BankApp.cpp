#include <iostream>
#include <fstream>

using namespace std;

class account
{
    int acno;
    char name[50];
    int deposit;
    char type;

public:
    void create_account();
    void show_account() const;
    void modify();
    void dep(int);
    void draw(int);
    void report() const;
    int retacno() const;
    int retdeposit() const;
    char rettype() const;
};
void account::create_account()
{
    cout << "\nEnter The Account No. : ";
    cin >> acno;
    cout << "\nEnter The Name of The Account Holder : ";
    cin.ignore();
    cin.getline(name, 50);
    cout << "\nType of Account: " << type;
    cout << "\nEnter The Initial Deposit Amount : ";
    cin >> deposit;
}
void account::show_account() const
{
    cout << "\nAccount No. : " << acno;
    cout << "\nAccount Holder Name : " << name;
    cout << "\nType of Account : " << type;
    cout << "\nBalance amount : " << deposit;
}
void account::modify()
{
    cout << "\nEnter The Account No. you want to modify for: ";
    cin >> acno;
    cout << "\nEnter The Name of The Account Holder : ";
    cin.ignore();
    cin.getline(name, 50);
    cout << "\nType of Account: ";
    cin >> type;
    type = toupper(type);
    cout << "\nEnter The Initial Deposit Amount : ";
    cin >> deposit;
}
void account::dep(int x)
{
    deposit += x;
}
void account::draw(int x)
{
    deposit -= x;
}
void account::report() const
{
    cout << "\nAccount No. : " << acno;
    cout << "\nAccount Holder Name : " << name;
    cout << "\nType of Account : " << type;
    cout << "\nBalance amount : " << deposit;
}
int account::retacno() const
{
    return acno;
}
int account::retdeposit() const
{
    return deposit;
}
char account::rettype() const
{
    return type;
}


/* function declaration */
void write_account();
void display_sp(int);
void modify_account(int);
void delete_account(int);
void display_all();
void deposit_withdraw(int, int);
void info();

void intro()
{
    cout << "Welcome to Royal Bank....!!";
}
int main()
{
    char ch;
    int num;
    intro();
    do
    {
        system("cls");
        cout << "\n\n\n\tMAIN MENU";
        cout << "\n\n\t01. NEW ACCOUNT";
        cout << "\n\n\t02. DEPOSIT AMOUNT";
        cout << "\n\n\t03. WITHDRAW AMOUNT";
        cout << "\n\n\t04. BALANCE ENQUIRY";
        cout << "\n\n\t05. ALL ACCOUNT HOLDER LIST";
        cout << "\n\n\t06. CLOSE AN ACCOUNT";
        cout << "\n\n\t07. MODIFY AN ACCOUNT";
        cout << "\n\n\t08. EXIT";
        cout << "\n\n\tSelect Your Option (1-8) ";
        cin >> ch;
        system("cls");
        switch (ch)
        {
        case '1':
            write_account();
            break;
        case '2':
            cout << "\n\n\tEnter The Account No. : ";
            cin >> num;
            deposit_withdraw(num, 1);
            break;
        case '3':
            cout << "\n\n\tEnter The Account No. : ";
            cin >> num;
            deposit_withdraw(num, 2);
            break;
        case '4':
            cout << "\n\n\tEnter The Account No. : ";
            cin >> num;
            display_sp(num);
            break;
        case '5':
            display_all();
            break;
        case '6':
            cout << "\n\n\tEnter The Account No. : ";
            cin >> num;
            delete_account(num);
            break;
        case '7':
            cout << "\n\n\tEnter The Account No. : ";
            cin >> num;
            modify_account(num);
            break;
        case '8':
            cout << "\n\n\t\t\tThank You For Using Our Bank Services";
            break;
        default:
            cout << "Please enter a valid choice";
        }
        cin.ignore();
        cin.get();
    } while (ch != '8');
    return 0;
}

void write_account()
{
    account ac;
    ofstream outFile;
    outFile.open("account.dat", ios::binary | ios::app);
    ac.create_account();
    outFile.write(reinterpret_cast<char *>(&ac), sizeof(account));
    outFile.close();
}

void display_sp(int n)
{
    account ac;
    bool flag = false;
    ifstream inFile;
    inFile.open("account.dat", ios::binary);
    if (!inFile)
    {
        cout << "\n\n\tFile could not be open !! Press any Key...";
        return;
    }
    cout << "\n\n\t\tACCOUNT HOLDER LIST\n";
    cout << "\n\t=======================================\n";
    cout << "\tAccount No.\tName\t\tType\tBalance\n";
    cout << "\t=======================================\n";
    while (inFile.read(reinterpret_cast<char *>(&ac), sizeof(account)))
    {
        if (ac.retacno() == n)
        {
            ac.show_account();
            flag = true;
        }
    }
    inFile.close();
    if (flag == false)
    {
        cout << "\n\n\tAccount number does not exist";
    }
}