#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char* str1 = "C++";
    char* str2 = "Programming";
    // char* str3 = "Reyaansh";
    int m = strlen(str1);
    int n = strlen(str2);
    int i;
    for(i = 1; i<=n; i++)
    {
        cout.write(str2, i);
        cout<<"\n";
    }
    for(i = n-1; i>=1; i--)
    {
        cout.write(str2, i);
        cout<<"\n";
    }
    //concatenation
    cout.write(str1, m).write(str2, n);
    // m = strlen(str1);
    cout<<endl;
    cout.write(str1, 12);
}