#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        int total = (c/a) + (d/b);
        cout<<total<<endl;
    }
    return 0;
}