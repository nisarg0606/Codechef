#include<stdio.h>

int main()
{
    int a = 10;
    char c = 'a';
    float b = 20.2;
    double f = 30.3;
    long d = 40;
    unsigned long e = 50;
    printf("size of int: %d in bytes\n", sizeof(a));
    printf("size of char: %d in bytes\n", sizeof(c));
    printf("size of float: %d in bytes\n", sizeof(b));
    printf("size of double: %d in bytes\n", sizeof(f));
    printf("size of long: %d in bytes\n", sizeof(d));
    printf("size of unsigned long: %d in bytes\n", sizeof(e));
    return 0;
}