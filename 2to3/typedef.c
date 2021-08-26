#include<stdio.h>
typedef struct Student{
    int roll;
    char name[20];
    float marks;
}stud;
int main()
{
    typedef int pearl;
    pearl a = 1;
    printf("%d\n", a);
    stud s;
    s.roll = 1;
    s.marks = 2.5;
    s.name[0] = 'a';
    s.name[1] = '\0';
    printf("%d\n", s.roll);
    printf("%f\n", s.marks);
    printf("%s\n", s.name);
}