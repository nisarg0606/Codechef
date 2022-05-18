#include <string>
#include <cstdlib>
#include <iostream>
#include "StoreKossCoMembership.h"
using namespace std;

namespace storekosscomembership
{
    StoreKossCoMembership ::StoreKossCoMembership() : name("no name yet"), age(0)
    {
    }
    StoreKossCoMembership ::StoreKossCoMembership(string the_name, int the_age) : name(the_name), age(the_age)
    {
    }
    string StoreKossCoMembership ::get_name() const
    {
        return name;
    }
    int StoreKossCoMembership ::get_age() const
    {
        return age;
    }
    void StoreKossCoMembership ::set_name(string new_name)
    {
        name = new_name;
    }
    void StoreKossCoMembership ::set_age(int new_age)
    {
        age = new_age;
    }
    void StoreKossCoMembership :: welcomeMessage()
    {
        cout << "Welcome to StoreKossCoMembership!\n";
    }
    void StoreKossCoMembership ::print_check() const
    {
        cout << "\nERROR: print_check FUNCTION CALLED FOR AN \n"
             << "UNDIFFERENTIATED Error. Aborting the program.\n"
             << "Check with the author of the program about this bug.\n";
        exit(1);
    }

}