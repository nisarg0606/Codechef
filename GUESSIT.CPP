#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        for (int i = 1; i <= 1000; i++)
        {
            cout<<(i*i)<<endl;
            int ans;
            cin>>ans;
            if(ans == 1)
            goto end;
        }
        end:
        continue;
    }
    return 0;
}
