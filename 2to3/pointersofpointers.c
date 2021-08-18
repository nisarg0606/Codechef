#include<stdio.h>

int main()
{
    // int a = 10;
    // int *p = NULL;
    // p = &a;
    // int **q = &p;
    // printf("%d\n", *p);
    // printf("%d\n", **q);
    // printf("Address of a is %x", &a);
    // printf("\nAddress of p is: %x", q);
    // printf("\nAddress of *q is: %x", &*q);
    // return 0;

    int a[10], i;
    for(i = 0; i < 10; i++)
    {
        printf("Enter an number: \n");
        scanf("%d", &a[i]);
    }
    int *p;
    p = a;
    printf("In ascending order: \n");
    for(i = 0; i < 10; i++)
    {
        printf("%d\n", *p);
        p++;
    }
    --p;
    printf("In descending order: ");
    for(i = 0; i < 10; i++)
    {
        printf("%d\n", *p);
        p--;
    }
}

/*
CHAR ARR[] = "SUPRIYA"
NESTTED FOR LOOP
STRLEN
S U P R I Y A
S U P R I Y A
S U P R I Y A
S U P R I Y A
S U P R I Y A
*/