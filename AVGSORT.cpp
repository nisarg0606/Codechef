#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int arraySortedCheck(double arr[], int n){
   //all elements are checked and
   //all are in sorted order
   if (n == 1 || n == 0)
      return 1;
   //when an array is not in sorted order
   if(arr[n-1] < arr[n-2])
      return 0;
   return arraySortedCheck(arr, n-1);
}
int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        double a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 1; i < n; i++)
        {
            if (a[0] > a[i] || a[i] > a[i + 1])
            {
                // cout << "No" << endl;
                break;
            }
            else if (a[i] <= a[i + 1])
            {
                a[i + 1] = (a[i] + a[i + 1] / 2);
            }
        }
        if(arraySortedCheck(a,n))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }        
    }
    return 0;
}