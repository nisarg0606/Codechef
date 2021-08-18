#include<stdio.h>

int main()
{
    int i=0;
    while(i<=10)//for(i=0; i<=10; i++)
    {
        printf("%d\n", i);
        i++;
    }//entry control loop
    printf("%d", i);
    printf("Outside of while loop");
}