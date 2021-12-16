#include<stdio.h>

int main()
{
    //int a[5];//signle dim
    int b[5][5];//two dim
    //int c[1][1][1];
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            b[i][j] = count;
            count++;
        }
    }  
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%.2d ", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%2d ", b[i][j]);
        }
        printf("\n");
    }
    
}