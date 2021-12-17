#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[3][3];
    int b[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Enter a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Enter b["<<i<<"]["<<j<<"]: ";
            cin>>b[i][j];
        }
    }
    cout<<"The addition of 2 matrix is: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%.2d ", a[i][j]+b[i][j]);
        }
        cout<<endl;
    }
    return 0;
}
