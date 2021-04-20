#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int am, bm, cm, tm, a, b, c, total = 0;
        cin >> am >> bm >> cm >> tm >> a >> b >> c;
        total = a + b + c;
        if(a>=am && b>=bm && c >= cm && total >= tm)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}