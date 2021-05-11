#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main(int argc, char const *argv[])
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll count = 0;
        ll n,m;
        cin>>n>>m;
        vector<long long> mod(n+1);
        for (ll i = 1; i <= n; i++)
        {
            ll a = m%i;
            count += mod[a];
            for (int j = a; j <= n; j+=i)
            {
                mod[j]++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
