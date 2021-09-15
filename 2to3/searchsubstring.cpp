#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int i,j;
    char str[] = "C++ is better than C";
    int len = strlen(str);
    cout<<"The main string is:  "<<str<<endl;
    char *substr = new char[len];
    cout<<"Enter the substring to be searched: ";
    cin>>substr;
    int sublen = strlen(substr);
    for(i=0;i<len;i++)
    {
        int k = i;
        for(j=0;j<sublen;j++)
        {
            
}