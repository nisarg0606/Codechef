#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,xr,yr,d;
        cin>>x>>y>>xr>>yr>>d;
        float xf = x/xr;
        float yf = y/yr;
        int ans = min(xf, yf);
        if(ans < d)
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
        }
    }
    return 0;
}
