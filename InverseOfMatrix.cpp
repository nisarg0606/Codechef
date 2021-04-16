#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mat[3][3], i, j;
    float determinant = 0;
a:
    cout << "Enter elements of matrix row wise:\n";
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            cout << "Enter mat[" << i << "][" << j << "] element: ";
            cin >> mat[i][j];
        }

    printf("\nGiven matrix is:");
    for (i = 0; i < 3; i++)
    {
        cout << "\n";

        for (j = 0; j < 3; j++)
            cout << mat[i][j] << "\t";
    }

    //finding determinant
    for (i = 0; i < 3; i++)
        determinant = determinant + (mat[0][i] * (mat[1][(i + 1) % 3] * mat[2][(i + 2) % 3] - mat[1][(i + 2) % 3] * mat[2][(i + 1) % 3]));
    // determinant = (mat[1][1] * ((mat[2][2] * mat[3][3]) - (mat[3][2] * mat[2][3]))) - (mat[1][2] * ((mat[2][1] * mat[3][3]) - (mat[2][3] * mat[3][1])) + (mat[1][3]) * ((mat[2][1] * mat[3][2]) - (mat[2][2] * mat[3][1])));

    cout << "\n\ndeterminant: " << determinant;
    if (determinant == 0)
    {
        cout << "\n\nInverse not possible as the determinant is zero! Enter a valid Matrix" << endl;
        goto a;
    }
    cout << "\n\nInverse of matrix is: \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << fixed << setprecision(2) << ((mat[(j + 1) % 3][(i + 1) % 3] * mat[(j + 2) % 3][(i + 2) % 3]) - (mat[(j + 1) % 3][(i + 2) % 3] * mat[(j + 2) % 3][(i + 1) % 3])) / determinant << "\t";
        cout << "\n";
    }
    return 0;
}