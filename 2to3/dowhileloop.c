#include<stdio.h>

int main()
{
    int a=10;
    do{
        printf("%d\n", a);
        a = a + 2;
    }while(a<20);
    return 0;
}