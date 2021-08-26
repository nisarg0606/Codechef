#include<stdio.h>

int main()
{
    int a = 10;
    int *p = NULL;// define a pointer to an integer
    p = &a; //assign the address of a to p
    printf("value of a: %d\n", a);
    printf("Address of a using a: %x\n", &a);
    printf("Address of a using pointer p: %x\n", p); // calling the address of a
    *p = 20;// changing the value of a
    printf("new value of a: %d\n", a);

    int a[] = {1,2,3,4,5,6, 7, 8};
    int *p2 = NULL;
    p2 = a;
    printf("Address of a using a: %x\n", a);
    printf("Address of a using pointer p2: %x\n", p2);
    *p2 = 20;
    // printf("new value of a: %d\n", a[0]);
    return 0;
}

/*
1 0 1 0 1
1 0 1 0 1
1 0 1 0 1
1 0 1 0 1
1 0 1 0 1

A
A B
A B C
A B C D
A B C D E
*/