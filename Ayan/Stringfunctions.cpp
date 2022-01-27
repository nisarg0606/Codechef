#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[] = "Ayaan is studing in ninth grade";
    // int len = str.length();
    string substring;
    // cout<<"Enter the substring to be searched: ";
    // cin>>substring;
    // cout<<"The length of the string is: "<<len<<endl;
    // substring = str.substr(9, 7);
    cout<<"The substring is: "<<substring<<endl;
    // substring = str.append(" and he is a good boy");
    cout<<"The updated substring is: "<< substring<<endl;
    string newstring;

    char* stringarr;
    stringarr = (char*)malloc(50);
    strcpy(stringarr, str) ;
    cout<<stringarr;
    return 0;
}