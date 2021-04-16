#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long a[95];
        a[1]=1;
        a[2]=2;
        a[3]=3;
        a[4]=4;
        for(int i=5;i<95;i++)
        {
            a[i]=a[i-3]+a[i-1];
        }
        cout<<a[n]<<endl;
    }
}