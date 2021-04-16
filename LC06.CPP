//wrong sequence->wrong submission
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
unsigned long long int sequence(int n)
{
    if(n == 4)
    {
        return 4;
    }
    return floor(sequence(n-1)*3/2);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; 
        cin>>n;
        cout<<sequence(n)<<endl;
    }
    return 0;
}