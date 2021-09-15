#include<stdio.h>

int main()
{
    int num;
    printf("Enter how many values you want to add in the array: ");
    scanf("%d", &num);
    int arr[num];
    float avg = 1, sum = 0;
    for (int i = 0; i < num; i++)
    {
        printf("Enter the %d element of the array: ", i+1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    avg = sum / num;
    printf("The averge of the elements of the array is : %.2f", avg);
}