#include<stdio.h>
#define FIRST 360
#define SECOND 240
int main()
{
    int n, m, i,j, rno, marks, total;
    printf("Enter number of students and subjects: \n");
    scanf("%d%d", &n, &m);
    printf("\n");
    for(i = 1; i <= n; i++)
    {
        printf("Enter roll no. of student %d: ", i);
        scanf("%d", &rno);
        total = 0;
        printf("Enter marks of %d subjects for Roll no %d\n", m, rno);
        for(j = 1; j <= m; j++)
        {
            printf("Enter marks of subject %d: ", j);
            scanf("%d", &marks);
            total = total + marks;
        }
        printf("\nTotal marks of student %d is %d\n", rno, total);
        if(total >= FIRST)
        {
            printf("Student %d is passed\n with first class", rno);
        }
        else if(total >= SECOND)
        {
            printf("Student %d is passed\n with second class", rno);
        }
        else
        {
            printf("Student %d is failed\n", rno);
        }
    }
}