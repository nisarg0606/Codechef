#include<stdio.h>

int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int *p = a;
    int i;
    for(i=0;i<10;i++)
    {
        printf("Address is: %x\n", p);
        printf("Value is: %d\n",*p);
        p++;
    }
}