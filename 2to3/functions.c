// what is function??
//return_type func_name(arg_type1 arg1, ...)
#include<stdio.h>
int cube(int n); //prototype
int max(int a, int b); //prototype
// void main(){
//     int n, a, b;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("%d^3 = %d\n", n, cube(n));//3^3 4 ^4//cube(n) // 2*2 -> square
//     //cube(n) -> function call
//     printf("Enter two numbers: ");
//     scanf("%d%d", &a, &b);
//     printf("max(%d,%d) = %d\n", a, b, max(a, b));
//     //max(a,b) -> function call
// }
int cube(int n)//function declation
{
    int result = n * n * n;
    return result;
}
int max(int a, int b)//function declation
{
    if (a > b)
        return a;
    else
        return b;
}

//function call by reference and call by value
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nThe value of a is %d in swap function: ", a);
    printf("\nThe value of b is %d in swap function: ", b);
}

int main()
{
    int a, b;
    // printf("Enter two numbers: ");
    // scanf("%d%d", &a, &b);
    // printf("a = %d, b = %d\n", a, b);
    // swap(a,b);
    // printf("\na = %d, b = %d\n", a, b);
    printf("Enter the value of A: ");
    scanf("%d", &a);
    int *p = &a;
    printf("\nA is stored at address %x", &a);
    printf("\nA is stored at address %x using pointer", p);
    *p = 20;
    printf("\nThe value of a is %d", a);
}