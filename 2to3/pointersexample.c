// #include<stdio.h>

// int main()
// {
//     // int x = 100;
//     // int *p = &x;
//     // int *temp = p;
//     // p = p + 3;
//     // printf("sub: Adreess will be %d- %d = %d", p, temp, p-temp);

//     int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int *p = a;
//     int i, j;
//     for (i = 0; i < 10; i++)
//     {
//         printf("%d\n", *p);
//         p++;
//     }
//     p--;
//     for (j = 0; j < 10; j++)
//     {
//         printf("%d\n", *p);
//         p--;
//     }
// }

#include <stdio.h>
 
int main()
{
    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3;
 
    printf("%f ", *ptr2);
    printf("%d", ptr2 - ptr1); //ptr2* = 90.5 ptr2 = 12 - 0 
 
   return 0;
}