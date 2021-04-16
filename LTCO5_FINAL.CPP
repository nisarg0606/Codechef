#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s1, s2, s3;
        cin>>s1>>s2>>s3;
        int sum1=0, sum2=0, sum3=0;
        for(int i = 0; i < s1.size(); i++)
            sum1 += s1[i];
        for(int i = 0; i < s2.size(); i++)
            sum2 += s2[i];
        for(int i = 0; i < s3.size(); i++)
            sum3 += s3[i];
        if (sum1 == sum2)
        {
            if (sum2 == sum3)
            {
                cout << "Possible"<<endl;
            }
            else
            {
                cout << "Not Possible"<<endl;
            }
        }
        else
        {
            cout << "Not Possible"<<endl;
        }
    }
}