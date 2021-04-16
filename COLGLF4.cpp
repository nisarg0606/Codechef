#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
ll res(ll n, ll e,ll h, ll A, ll B,ll C);
ll minv(ll a, ll b);
ll maxv(ll a, ll b);
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n, e, h, A, B, C, ans =0;
        cin>>n>>e>>h>>A>>B>>C;
        ans = res(n,e, h, A, B, C);
        if(ans == 1e15)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}

ll res(ll n, ll e,ll h, ll A, ll B,ll C){
    if (n <=0)
    {
        return 0;
    }

    ll ans = 1e15;

    if((n <= e) && (n <= h))
    {
        ans = minv(ans, n * C);
    }
     
    if(3 * n <= h)
    {
        ans = minv(ans, n * B);
    }

    if( 2 * n <= e)
    {
        ans = minv(ans, n * A);
    }

    if((h - n) / 2 >= 1 && ((h - n) / 2 >= n -e))
    {
        if(B - C < 0)
        {
            ll temp = minv(n-1, (h-n)/2);
            ans = minv(ans, (B-C) * temp + n*C);
        }       
        else{
            ll temp = maxv(1, n - e);
            ans = minv(ans, (B-C) * temp + n*C);
        }
    }

    if(e - n >= 1 && e - n >= n - h)
    {
        if(A - C < 0)
        {
            ll temp = minv(n-1, e-n);
            ans = minv(ans, (A-C)*temp + n*C);
        }
        else{
            ll temp = maxv(1, n - h);
            ans = minv(ans, (A-C)*temp + n*C);
        }
    }

    if((e/2 >= 1) && (e/2 >= (3*n - h + 2)/3)){
        if(A - B < 0)
        {
            ll temp = minv(n-1, e/2);
            ans = minv(ans, (A-B)*temp + n*B);
        }
        else{
            ll temp = maxv(1, (3*n - h + 2)/3);
            ans = minv(ans, (A-B)*temp + n*B);
        }
    }

    if((e >= 3) && (h >= 4) && (n >= 3))
    {
        ans = minv(ans, A+B+C+res(n-3, e-3, h-4, A,B,C));
    } 
    return ans;
}

ll minv(ll a, ll b)
{
    if(a < b)
        return a;
    return b;
}
ll maxv(ll a, ll b)
{
    if(a > b)
        return a;
    return b;
}