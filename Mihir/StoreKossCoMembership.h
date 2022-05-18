#ifndef STOREKOSSCOMEMBERSHIP_H
#define STOREKOSSCOMEMBERSHIP_H

#include <string>
using namespace std;

namespace storekosscomembership
{
    class StoreKossCoMembership
    {
    public:
        StoreKossCoMembership();
        StoreKossCoMembership(string name, int age);
        string get_name() const;
        int get_age() const;
        void set_name(string new_name);
        void set_age(int new_age);
        void welcomeMessage();
        void print_check() const;

    private:
        string name;
        int age;
    };

} // storekosscomembership

#endif // STOREKOSSCOMEMBERSHIP_H