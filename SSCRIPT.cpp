#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    string s;
    ll n, k, flag = 0,count=0;
    while (t--)
    {
        cin>>n>>k;
        cin>>s;
        flag=count=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '*')
                count++;
            else
            {
                if(count>=k)
                {
                    flag=1;
                    break;
                }
                else
                    count=0;
            }
        }
        if(count>=k)
            flag=1;
        if(flag==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;   
}