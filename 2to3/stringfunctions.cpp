#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str1, str2;
    cout<<"Enter a string: ";
    char chr[35], chr1[35];
    cin.getline(chr,35);
    strcpy(chr1, chr);
    cout<<"Enter a string: ";
    cin.getline(chr1,35);
    strcat(chr, chr1);//string concatination
    cout<<strcmp(chr1, chr)<<endl;//string comparision
    cout<<"The length of string1 is : "<<str1.length()<<endl;
    cout<<"The length of string2 is : "<<str2.length()<<endl;
    cout<<str1.compare(str2)<<endl;
    int cmp = str1.compare(str2);
    if(cmp== 0){
        cout<<"Both the strings are same....";
    }
    else{
        cout<<"Both the strings are different....";
    }
    cout<<chr1<<endl;
}