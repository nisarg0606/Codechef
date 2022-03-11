#include<stdio.h>

int main(){
    int n;
    printf("Please enter the value of n: ");
    scanf("%d", &n);
    // n = 1;
    // n = 0;
    if(n % 2 == 0)
    {
        printf("This is an even number");
    }
    else{
        printf("This is an odd number");
    }
    return 0;
}