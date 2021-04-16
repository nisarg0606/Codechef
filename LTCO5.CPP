#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    string str[n];
    int sum[n];
    for (int i = 0; i < n; i++)
    {
        cin>>str[i];
        int c = str[i].length();
        char ch[c];
        for(int j = 0; str[i][j] !='\0'; j++)
        {
            sum[i] += str[i][j];
        }
        cout<<sum[i];
    }
    
    return 0;
}
