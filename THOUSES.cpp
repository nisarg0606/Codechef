#include<bits/stdc++.h>
using namespace std;

#define ll long long int
ll gcd(ll a, ll b)
{
    if(b == 0)
        return a;
    return gcd(b, a% b);
}
int main(int argc, char const *argv[])
{
    ll t,k;
    cin>>t;
    while (t--)
    {
        ll result = 0;
        cin>>k;
        for (ll i = 1; i <= 2*k; i++)
            result += gcd(k+i*i, k+(i+1)*(i+1));
        cout<<result%1000000007<<endl;
    }
    return 0;
}