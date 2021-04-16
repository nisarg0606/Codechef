#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s="";
        cin>>s;
        int n=s.length(),i=0;
        while(i<=n)
        {
            if(s.substr(i,5) == "party")
                s.replace(i,5,"pawri");
        i++;
        }
    cout<<s<<endl;
    }
    return 0;   
}