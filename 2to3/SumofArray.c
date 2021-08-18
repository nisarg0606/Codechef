#include<stdio.h>

int main()
{
    int a[5],i, sum = 0;
    
    for(i = 0; i< 5; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("sum of 5 numbers is : %d ", sum);
    return 0;
}