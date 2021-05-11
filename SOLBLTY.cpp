#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,a,b;
        cin>>x>>a>>b;
        int solubility = (a + (100 - x) * b);
        cout<<solubility*10<<endl;
    }
    
    return 0;
}
