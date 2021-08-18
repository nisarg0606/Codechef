#include<stdio.h>

// return_type function_name(parameters){
//     // function body
// }

/*
    Author: Nisarg Shah
    Topic: call by value and call by reference
    DOC: 13-08-2021
*/
int max(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("A is : %d and B is %d\n", a, b);
}
int main()
{
    int a = 10,b = 20;
    // printf("Enter two numbers: ");
    // scanf("%d%d", &a, &b);
    // printf("The maximum is: %d", max(a,b));
    swap(a,b);
    printf("The value of a and b in main function is: %d and %d", a, b);
    return 0;
}