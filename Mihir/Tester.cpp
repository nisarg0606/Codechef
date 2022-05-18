#include <bits/stdc++.h>
using namespace std;
#include "StoreKossCoMembership.h"
#include "Executive.h"
#include "GoldStar.h"
using namespace storekosscomembership;

template <class T>
class Tester
{
public:
    T x;
    Tester()
    {
        cout << "Tester constructor called.\n";
    }
};
int main()
{
    Tester<int> t;
    while (true)
    {
    NewMember:
        StoreKossCoMembership *p = new StoreKossCoMembership();
        string name;
        p->welcomeMessage();
        cout << "Please enter your name: ";
        cin >> name;
        p->set_name(name);
        int age;
    AgeCheck:
        cout << "Please enter your age: ";
        try
        {
            cin >> age;
            if (age < 0 || age > 120)
            {
                throw age;
            }
        }
        catch (int age)
        {
            cout << "ERROR: Invalid input for age.\n";
            fflush(stdin);
            goto AgeCheck;
        }
        p->set_age(age);
        cout << "Please enter the type of membership you want 1 for Executive and 2 for GoldStar: ";
        int type;
        cin >> type;
        if (type == 1)
        {
            Executive *p1 = new Executive();
            p1->welcomeMessage();
            while (true)
            {

                cout << "1 - Purchase: " << endl;
                cout << "2 - Return: " << endl;
                cout << "3 - Redeem: " << endl;
                cout << "4 - Different Member" << endl;
                cout << "5 - Print all details" << endl;
                cout << "6 - Exit" << endl;
                cout << "Please enter your choice: ";
                int choice;
                cin >> choice;
                if (choice == 1)
                {
                CostCheckExecPur:
                    cout << "Enter your purchase cost: ";
                    double cost;
                    try
                    {
                        cin >> cost;
                        if (cost < 0)
                        {
                            throw cost;
                        }
                    }
                    catch (double cost)
                    {
                        cout << "ERROR: Invalid input for cost.\n";
                        cost = 0;
                        goto CostCheckExecPur;
                    }
                    p1->PointsCalculator(cost, "purchase");
                }
                else if (choice == 2)
                {
                CostCheckExecRet:
                    cout << "Enter your return cost: ";
                    double cost;
                    try
                    {
                        cin >> cost;
                        if (cost < 0)
                        {
                            throw cost;
                        }
                    }
                    catch (double cost)
                    {
                        cout << "ERROR: Invalid input for cost.\n";
                        cost = 0;
                        goto CostCheckExecRet;
                    }
                    p1->PointsCalculator(cost, "return");
                }
                else if (choice == 3)
                {
                    cout << "You have redeemed $" << p1->PointsReedem(p1->get_finalPoints()) << endl;
                }
                else if (choice == 4)
                {
                    delete p1;
                    delete p;
                    goto NewMember;
                }
                else if (choice == 5)
                {
                    cout << "Name: " << p->get_name() << endl;
                    cout << "Age: " << p->get_age() << endl;
                    cout << "Points: " << p1->get_finalPoints() << endl;
                }
                else if (choice == 6)
                {
                    delete p1;
                    delete p;
                    exit(0);
                }
                else
                {
                    cout << "Invalid input.\n";
                }
            }
        }
        else if (type == 2)
        {
            GoldStar *p1 = new GoldStar();
            p1->welcomeMessage();
            while (true)
            {

                cout << "1 - Purchase: " << endl;
                cout << "2 - Return: " << endl;
                cout << "3 - Redeem: " << endl;
                cout << "4 - Different Member" << endl;
                cout << "5 - Print all Details" << endl;
                cout << "6 - Exit" << endl;
                cout << "Please enter your choice: ";
                int choice;
                cin >> choice;
                if (choice == 1)
                {
                CostCheckGoldPur:
                    cout << "Enter your purchase cost: ";
                    double cost;
                    try
                    {
                        cin >> cost;
                        if (cost < 0)
                        {
                            throw cost;
                        }
                    }
                    catch (double cost)
                    {
                        cout << "ERROR: Invalid input for cost.\n";
                        cost = 0;
                        goto CostCheckGoldPur;
                    }
                    p1->PointsCalculator(cost, "purchase");
                }
                else if (choice == 2)
                {
                CostCheckGoldRet:
                    cout << "Enter your return cost: ";
                    double cost;
                    try
                    {
                        cin >> cost;
                        if (cost < 0)
                        {
                            throw cost;
                        }
                    }
                    catch (double cost)
                    {
                        cout << "ERROR: Invalid input for cost.\n";
                        cost = 0;
                        goto CostCheckGoldRet;
                    }
                    p1->PointsCalculator(cost, "return");
                }
                else if (choice == 3)
                {
                    cout << "You have redeemed $" << p1->PointsReedem(p1->get_finalPoints()) << endl;
                }
                else if (choice == 4)
                {
                    delete p1;
                    delete p;
                    goto NewMember;
                }
                else if (choice == 5)
                {
                    cout << "Name: " << p->get_name() << endl;
                    cout << "Age: " << p->get_age() << endl;
                    cout << "Final Points: " << p1->get_finalPoints() << endl;
                }
                else if (choice == 6)
                {
                    delete p1;
                    delete p;
                    exit(0);
                }
                else
                {
                    cout << "Invalid input.\n";
                }
            }
        }
        else
        {
            cout << "Invalid membership type.\n";
            continue;
        }
        cout << "Thank you for using our membership program.\n";
    }
}
