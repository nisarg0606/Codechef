#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll sum = 0;
        sum = n *11;
        int rem = (n % 4);

        if (n >= 4)
        {
            if(rem == 0)
            {
                sum = sum + 16;
            }
            if(rem == 1)
            {
                sum+=32;
            }
            if(rem == 2)
            {
                sum += 44;
            }
            if(rem == 3)
            {
                sum += 55;
            }
            cout<<sum<<endl;
        }
        else{
            if(rem==1)
            {
                sum =20;
            }
            if(rem == 2)
            {
                sum = 36;
            }
            if(rem == 3)
            {
                sum = 51;
            }
            cout<<sum<<endl;
        }
    }

    return 0;
}
