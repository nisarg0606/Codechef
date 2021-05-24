#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main(int argc, char const *argv[])
{
    int a=10,b=21,c=42;
    int t;
    cin>>t;
    while (t--)
    {
        int D,d,A,B,C;
        cin>>D>>d>>A>>B>>C;
        if(D*d < 10)
            cout<<0<<endl;
        if(D*d >= a && D*d < b)
            cout<<A<<endl;
        else if(D*d >= b && D*d < c)
            cout<<B<<endl;
        else if(D*d >= c)
            cout<<C<<endl;
    }
    return 0;
}
