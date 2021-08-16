#include<iostream>

using namespace std;

int main()
{
    int a[3][3], b[3][3], c[3][3]; //declaration of multi-dimensional arrays
    int i, j;
    cout<<"Enter the elements of the array: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];//i =0 j=0,1,2,3,4 -> first time 
            //i =1  j=0,1,2,3,4 -> second time
        }
    }    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<"b["<<i<<"]["<<j<<"] = ";
            cin>>b[i][j];
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<c[i][j]<<"\t";//matrix
        }
        cout<<endl;
    }
    return 0;
}