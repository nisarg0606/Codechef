#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        int s,a,b,c;
        cin>>s>>a>>b>>c;
        float ans = s;
        ans +=  s * (c / 100);
        if(ans >= a && ans <= b)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}