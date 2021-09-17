#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class BankAccount {
public:
    string name;
    int accnum;
    int bal;
    BankAccount(string name, int accnum, double bal) {
        this->name = name;
        this->accnum = accnum;
        this->bal = bal;
    }
    void deposit(int amount) {
        bal += amount;
    }
    void withdraw(int amount) {
        if(bal - amount >= 0) {
            bal -= amount;
        }
        else {
            cout << "Insufficient funds" << endl;
        }
    }
};

int main()
{
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    int accnum;
    cout<<"Enter your account number: ";
    cin>>accnum;
    double bal;
    cout<<"Enter your balance: ";
    cin>>bal;
    BankAccount ba(name, accnum, bal);
    fstream fout("BankAppv3.txt", ios::in | ios::out);
    fout<<ba.name << " ";
    fout<<ba.accnum<< " ";
    fout<<ba.bal<<"\n";
    fout.close();
    fstream fin("BankAppv3.txt", ios::in | ios::out);
    string line;
    while(getline(fin, line)) {
        cout<<line<<endl;
    }
    while(true) {
        cout<<"1.Deposit\n2.Withdraw\n3.Exit\n";
        int choice;
        cin>>choice;
        switch(choice) {
            case 1:
                int amount;
                cout<<"Enter amount to deposit: ";
                cin>>amount;
                ba.deposit(amount);
                // fin.seekg(0, ios::beg);
                fin.seekp(0, ios::beg);
                cout<<ba.name<<" "<<ba.accnum<<" "<<ba.bal<<"\n";
                fin<<ba.name << " ";
                fin<<ba.accnum<< " ";
                fin<<ba.bal<<"\n";
                break;
            case 2:
                // int amount;
                cout<<"Enter amount to withdraw: ";
                cin>>amount;
                ba.withdraw(amount);
                cout<<ba.name<<" "<<ba.accnum<<" "<<ba.bal<<"\n";
                // fin.seekg(0, ios::beg);
                fin.seekp(0, ios::beg);
                fin<<ba.name << " ";
                fin<<ba.accnum<< " ";
                fin<<ba.bal<<"\n";
                break;
            case 3:
                return 0;
                break;
            default:
                cout<<"Invalid choice\n";
                break;
        }
    }
    fin.close();
    return 0;
}