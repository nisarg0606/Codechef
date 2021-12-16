#include<stdio.h>

int main()
{
    //int a[5];//signle dim
    int b[5][5];//two dim
    //int c[1][1][1];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            b[i][j] = 5;
        }
    }  
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    
}