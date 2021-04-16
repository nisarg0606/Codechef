#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main(){
    int t;
    cin >> t;
    while (t--){
        ll n, sum = 1;
        cin >> n;
        while (n != 0){
            int rem = n % 10;
            // if (rem == 0 || rem == 1 || rem == 2 || rem == 3 || rem == 4 || rem == 5)
            if(rem <=5)
                sum = sum * 3;
            else
                sum = sum * 2;
            n/=10;
        }
        cout << sum << endl;
    }
}