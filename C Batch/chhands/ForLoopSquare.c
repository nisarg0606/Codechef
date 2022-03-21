#include<stdio.h>

int main(){
    int n = 1 , i;
    for(i = 1; i <=10; i++)
    {
        printf("The Square of %d is %d\n", n, n*n);
        n++;// n = n + 1
    }
    return 0;
}