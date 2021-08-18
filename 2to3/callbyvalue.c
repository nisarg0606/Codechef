#include<stdio.h>
void change(int *num)
{
    printf("Before adding the num: %d\n", *num);
    (*num) += 100;
    printf("After adding the num: %d\n", *num);
    // return num;
}
int main()
{
    int x = 100;
    printf("Before passing the value to the function: %d\n", x);
    change(&x);
    printf("After passing the value to the function: %d\n", x);
    return 0;
}
// void swap(int *, int *);
// int main()
// {
//     int a = 10;
//     int b = 20;
//     printf("\nBefore swapping the value of a is %d and value of b is %d", a, b);
//     swap(&a, &b);
//     printf("\nAfter swapping the value of a is %d and value of b is %d", a, b);
// }

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     printf("\nAfter swapping values in the function: a = %d and b = %d", *a,*b);
// }