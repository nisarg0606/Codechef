#include <stdio.h>

int main()
{
    //datatype array_name[array_size]
    int a[5] = {1, 2, 3, 4, 5};
    // int a[5];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;

    char b[5] = {'a', 'b', 'c', 'd', 'e'};
    for (int i = 0; i < 5; i++)
        printf("%d\n", a[i]);
    for (int i = 0; i < 5; i++)
        printf("%c\n", b[i]);
}