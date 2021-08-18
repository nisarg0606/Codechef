#include<stdio.h>

int add(int a, int b){
    return a+b;
}
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("%d + %d = %d\n", x, y, add(x, y));
}