#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        ll ans = a-c;
        ans = ans + (b-d);
        ll ans2 = a + c;
        ans2 = ans2 + (b+d);
        if(abs(ans) == k)
            cout<<"YES"<<endl;
        else if(abs(ans2) == k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}