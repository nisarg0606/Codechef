#include<stdio.h>

int main()
{
    int a;
    printf("Enter one numbers: ");
    scanf("%d", &a);//a = 5
    printf("%d\n", a++);// a = a + 1 //postfix -> pehle print karna(5) fir increment(+1 that is 6) 
    printf("%d\n", a);//(a = 6)
    printf("%d\n", ++a);//prefix ->pehle increment karna fir print karna
}