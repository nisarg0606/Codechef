// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//     ll n;
//     cin >> n;
//     ll a[n];
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     ll count = 0;
//     for (ll i = 0; i < n; i++)
//     {
//         if (a[0] != a[i])
//         {
//             count++;
//         }
//     }
//     cout << count << endl;
//     return 0;
// }
// form a square using the coordinates of the points given and if it is not forming then tell how many points are required to form a square. Return the number of points required to form a square. If it is already a square then return 0.

// Input Format
// N
// x[i] y[i]

//sample input
// 3
// 0 0
// 2 2
// 3 3

//sample output
// 2

#include<bits/stdc++.h>
using namespace std;

#define ll long long int


int main(int argc, char const *argv[])
{
    ll n;
    cin>>n;
    ll x[n],y[n];
    for(ll i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    ll count=0;
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            for(ll k=j+1;k<n;k++){
                for(ll l=k+1;l<n;l++){
                    if((x[i]==x[j] && x[j]==x[k] && x[k]==x[l]) || (y[i]==y[j] && y[j]==y[k] && y[k]==y[l])){
                        count++;
                    }
                }
            }
        }
    }
    cout<<count<<endl;
    
    return 0;
}
