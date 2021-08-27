#include<stdio.h>

int main()
{
    int a = 10;//-32000 to 32000
    char c = 'a';//-128 to 127
    float b = 20.2;//-32,768 to 32,767
    double f = 30.3;//-2,147,483,648 to 2,147,483,647
    long d = 40;//-2,147,483,648 to 2,147,483,647
    unsigned long e = 50; // 0 to 4294967295
    printf("size of int: %d in bytes\n", sizeof(a));
    printf("size of char: %d in bytes\n", sizeof(c));
    printf("size of float: %d in bytes\n", sizeof(b));
    printf("size of double: %d in bytes\n", sizeof(f));
    printf("size of long: %d in bytes\n", sizeof(d));
    printf("size of unsigned long: %d in bytes\n", sizeof(e));
    return 0;
}