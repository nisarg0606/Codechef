    #include<bits/stdc++.h>
    using namespace std;

    #define ll long long int
    int main(int argc, char const *argv[])
    {
        ll t;
        cin>>t;
        while (t--)
        {
            ll g,c;
            cin>>g>>c;
            ll ans = (c * c)/ (2* g);
            cout<<ans<<endl;
        }
        
        return 0;
    }