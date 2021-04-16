#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main(int argc, char const *argv[])
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n, q, m;
        cin>>n>>q>>m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[n];
        }
        int b[1000001]= {};
        int ans[m+1]= {};
        map<pair<int, int>, int> m1;
        while (q--)
        {
            ll l, r;
            cin>>l>>r;
            l--, r--;
            if(a[l] > m)
                continue;
            else if(a[l] <= m && a[r] > m)
            {
                b[a[l]]++, b[m+1]--;
            }
            else if(a[r] <= m)
            {
                b[a[l]]++, b[m+1]--;
                m1[{a[l], a[r]}]++;
            }
        }
        
        for (auto x : m1)
        {
            int k = x.first.first,p = x.first.second, l = x.second;

            b[p + k] -= 1, b[p + 2 * k] += l;
            int c = p + 2 * k;
            while (c+ p <= m)   
            {
                c += p;
                b[c] -=l, b[c+k] += l;
                c += k;
            }
        }
        for (int i = 1; i <= m; i++)
        {
            b[i] += b[i - 1];
        }
        
    }
    
    return 0;
}