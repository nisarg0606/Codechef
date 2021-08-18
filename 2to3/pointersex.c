#include<stdio.h>

// int main()
// {
//     int x = 20;
//     printf("%d\n", &x);//address
//     printf("%d\n", x);//value
//     int *p = &x;
//     *p = 40;
//     printf("%d\n", x);

//     // printf("%d\n", p);//by &x, p is the address of x
//     // printf("%d", *p);//by using this we can access the value of x
//     // int *p = NULL;
//     // int a;
//     // char c;
//     // float f;
//     // double d;
//     // printf("int: %d\n", sizeof(a));
//     // printf("char: %d\n", sizeof(c));
//     // printf("float: %d\n", sizeof(f));
//     // printf("double: %d\n", sizeof(d));
//     // printf("pointer: %d\n", sizeof(p));
// }

// /*
// A pointer in c , is a variable that holds the address of a variable.
// Pointer are symbolic represtation of address of a variable in memory.
// Syntax:
//     datatype *pointer_name;
//     datatype *pointer_name = &variable_name;
// */
//program to swap 2 numbers withouut using third variable
int main()
{
    int a = 10, b = 20;
    int *ap = &a, *bp = &b;
    int **app = &ap, **bpp = &bp;// a -> pointer *ap is storing the address of a 
    //-> *app is storing the addess of *ap
    *ap = *ap + *bp;//a = a + b;
    *bp = *ap - *bp;//b = a - b;
    *ap = *ap - *bp;//a = a - b;
    // printf("\nAfter Swap: a = %d and a = %d", a, b);
    // printf("\nAfter Swap: *ap = %d and *bp = %d", *ap, *bp);
    // printf("\nAddress of a is %d and b is %d: ", &a, &b);
    // printf("\nAddress of a is %d and b is %d: ", ap, bp);
}