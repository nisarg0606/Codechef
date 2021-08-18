#include<stdio.h>

int main()
{
    int a = 10;//this is child
    int *ap = &a;//father is stroing the address of child
    int **app = &ap;//gradpa is stroing the addesss of father
    printf("Address of app: %d\n",app);//*app is the address of parent
    printf("Address of ap : %d\n",ap);//*ap is the address of child
    printf("Address of a : %d\n", &a);//&a is the address of child
    printf("Value of app :%d\n", **app);//*app is the address of parent
    printf("Value of ap : %d\n", *ap);//*ap is the address of child
    printf("Value of a : %d\n", a);//a is the address of child
}