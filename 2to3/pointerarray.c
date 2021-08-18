#include<stdio.h>
// pointers with arrays
int main()
{
    int *p = NULL;
    int a[5] = {1, 2, 3, 4, 5};
    int i;
    p = a;
    int *q;
    int d = 10;
    q = &d;
    for (i = 0; i < 5; i++)
    {
        printf("value is: %d\n", *p);
        printf("Address is: %p\n", p);
        p++;
    }
    printf("%d\n", *q);
    return 0;
}