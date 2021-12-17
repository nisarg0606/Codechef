#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[5] = {0, 1, 2, 3, 4};
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int b[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << b[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}
