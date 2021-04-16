#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main(int argc, char const *argv[])
{
    ll t, i; char s[100000];
    cin >> t;
    while (t--)
    {
        ll flag=0,cnt = 0;
        cin>>s;
        for (i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == '1')
                flag = 1;
            if (flag == 1 && s[i] == '0')
            {
                cnt++;
                flag = 0;
            }
        }
        if (s[i - 1] == '1')
            ++cnt;
        cout << cnt << endl;
    }
    return 0;
}