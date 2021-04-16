#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    int n,h,x;
    cin>>n>>h>>x;
    int t[n];
    for (int i = 0; i < n; i++)
        cin>>t[i];
    for (int i = 0; i < n; i++)
    {
        if(x + t[i] >= h)
        {
            cout<<"YES"<<endl;
            exit(0);
        }
    }
    cout<<"NO"<<endl;
}