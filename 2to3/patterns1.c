#include<stdio.h>
#include<string.h>
// int main()
// {
//     int i,j;

//     for(i=1; i<=5; i++)
//     {
//         for(j=1; j<=i; j++)
//             printf("%d ", i);
//         printf("\n");
//     }
//     return 0;
// }
/*

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

1
1 2
1 2 3 
1 2 3 4
1 2 3 4 5

5
4 4
3 3 3
2 2 2 2
1 1 1 1 1


5
5 4 
5 4 3
5 4 3 2
5 4 3 2 1

2
2 4
2 4 6
2 4 6 8
2 4 6 8 10

5         
4 5       
3 4 5     
2 3 4 5   
1 2 3 4 5 
*/

// int main()
// {
//     int i,j;
//     int n = 5;
//     for(i=n; i>0; i--)
//     {
//         for(j=n; j>=i; j--)
//         {
//             printf("%d ", i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main()
// {
//     int i,j;
//     int n = 5;
//     for(i=n; i>=1; i--)
//     {
//         for(j=i; j<=n; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main()
// {
//     int i,j;
//     int n = 5;
//     for(i=1; i<=n; i++)
//     {
//         for(j=1; j<=i; j++)
//         {
//             printf("%d ", j * 2);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main()
// {
//     int i,j;
//     int n = 5;
//     for(i=5; i>=1; i--)
//     {
//         for(j = i; j <= n; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
// }
/*
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/

// 12345 -> 5
/*
    while loop arithmetic operator
*/

// int main()
// {
//     int n = 5, i, j;
//     for(i=n; i>=1; i--)
//     {
//         for(j=n;j>=i;j--)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
// }

// 5
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1

int main()
{
    char arr[]= "SUPRIYA";
    int len = strlen(arr);
    printf("%d\n", len);
    int i, j;
    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf("%c", arr[j]);
        }
        printf("\n");
    }
}
