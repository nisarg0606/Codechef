#include <iostream>
using namespace std;

int main()
{
    // int i = 5;
    // int *j = &i;
    // cout << i << endl;
    // cout << j << endl;
    // cout << *j << endl;
    // cout << &j << endl;

    string name = "Ayaan";
    string *nameptr = &name;

    string name2 = *nameptr;

    cout << name2 << endl;

    cout << *nameptr << endl;

    cout << nameptr << endl;

    cout << &nameptr << endl;
}