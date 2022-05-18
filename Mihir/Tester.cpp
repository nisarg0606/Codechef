#include <bits/stdc++.h>
using namespace std;
#include "StoreKossCoMembership.h"
#include "Executive.h"
#include "GoldStar.h"
using namespace storekosscomembership;

int main()
{
    while (true)
    {
    NewMember:
        StoreKossCoMembership *p = new GoldStar();
        string name;
        p->welcomeMessage();
        cout << "Please enter your name: ";
        cin >> name;
        p->set_name(name);
        int age;
        cout << "Please enter your age: ";
        cin >> age;
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
                    cout << "Enter your purchase cost: ";
                    double cost;
                    cin >> cost;
                    p1->PointsCalculator(cost, "purchase");
                }
                else if (choice == 2)
                {
                    cout << "Enter your return cost: ";
                    double cost;
                    cin >> cost;
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
                    cout << "Enter your purchase cost: ";
                    double cost;
                    cin >> cost;
                    p1->PointsCalculator(cost, "purchase");
                }
                else if (choice == 2)
                {
                    cout << "Enter your return cost: ";
                    double cost;
                    cin >> cost;
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
