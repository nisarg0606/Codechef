#include<stdio.h>

int main()
{
    //a [i][j];
    int a[4][5] = {{0, 1, 2, 3, 4}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}}, b[4][5];
    int c[4][5];
    for (int i = 3; i <= 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            a[i][j] = 5;
        }
    }
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter a number for matrix b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
        
    }
    
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         printf("%.2d ", a[i][j]);
    //     }
    //   printf("\n");  
    // }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%2d ", c[i][j]);
        }
        printf("\n");
    }
    
}