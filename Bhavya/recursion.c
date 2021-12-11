#include<stdio.h>
int fibonnaci(int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int f = fibonnaci(n);
    printf("The value will be %d", f);
}

int fibonnaci(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else{
        return fibonnaci(n - 1) + fibonnaci(n -2);
    }
}