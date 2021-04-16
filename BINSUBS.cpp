#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int tot0 = 0, tot1 = 0;
        for(auto c: s){
            if(c == '0')
                tot0++;
            else
                tot1++;
        }
        
        int ans = min(tot0, tot1);

        int curr0 = 0, curr1 = 0;
        for(auto c: s)
        {
            if(c == '0')
                curr0++;
            else
                curr1++;
            ans = min(ans, curr1 + (tot0 - curr0));
        }
        cout<<ans<<endl;
    }
    return 0;
}