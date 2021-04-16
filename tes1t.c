#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    printf("Enter a number to check odd or even: ");
    scanf("%d", &num);
    for (int i = 0; i <= num; i=i+2)
    {
        if(num==i)
        {
            printf("even");
            exit(0);
        }
    }
    printf("odd\n");
    
    if((num & 1) == 0)
    {
        printf("%d is the even number", num);
    }
    else
    {
        printf("%d is odd number", num);
    }
    return 0;
}