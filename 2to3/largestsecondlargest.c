#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number for n: ");
    scanf("%d", &n);
    int arr[n], i , largest, secondlargest;
    printf("Enter %d numbers: ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest=0;
    secondlargest;
    for(i=0;i<n;i++)    //i++ i = i + 1
    {
        if(arr[i]>largest)//arr[i] = 5
        {
            secondlargest=largest;//largest 0 
            largest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]!=largest)
        {
            secondlargest=arr[i];
        }
    }
    
    printf("Second largest number is: %d\n", secondlargest);
    printf("Largest number is %d", largest);
    return 0;    
}