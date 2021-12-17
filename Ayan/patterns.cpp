/*
* * * * *
* * * * *
* * * * *
* * * * *
*/
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
#include<iostream>
using namespace std;

int main()
{
    int i,j;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            cout<< " *";
        }
        cout<<"\n";
    }
    return 0;
}