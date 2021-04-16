#include<bits/stdc++.h>
#define in(n, arr) for(int i = 0; i < n; i++) cin>> arr[i]
#define out(n, arr) for(int i = 0; i < n; ++i) cout<< arr[i] << " "
#define ll int long long
const ll MAX = 1e9;

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
        int t;
        cin >> t;
        while (t--)
        {
            int n,k;
            cin>> n>> k;
            int height[n + 1];
            int suffix[n + 1];
            int dp[n + 1][k + 1];
        }
        
    return 0;
}
