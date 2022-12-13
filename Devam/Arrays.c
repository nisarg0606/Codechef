/*
    Topic: Arrays
    Author: Nisarg Shah
    Date: 16/07/2022     (DD-MM-YYYY)
*/
#include <stdio.h>
#include <conio.h>
// what is array in c?
// array is a collection of elements of the same data type
// It is used to store multiple values of the same data type in a single variable
int main()
{
    int a[5]; // signle dimmension array
    // clrscr();
    printf("Enter 5 numbers: ");
    // how many types of loops are there?
    // for
    // while
    // do while
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The Elements of the Array are : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    // getch();
}