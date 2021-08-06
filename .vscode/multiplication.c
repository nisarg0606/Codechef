#include<stdio.h>

int main()
{
    int a, b,i, pro = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for(i = 0; i<b; i++)
    {
        pro = pro + a;
    }
    printf("%d", pro);
}