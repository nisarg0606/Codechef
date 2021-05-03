#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    int withdraw;
    float balance;
    cin >> withdraw >> balance;
    float totalwithdrawal = (withdraw+0.5);
    if (withdraw % 5 != 0 || totalwithdrawal > balance)
    {
        cout<<balance<<endl;
    }
    else{
        cout<<balance-totalwithdrawal<<endl;
    }
    return 0;
}