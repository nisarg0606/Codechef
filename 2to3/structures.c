//how to declare a structure
/*
struct structname{
    datatype membername;
    datatype membername;
    datatype membername;

};
*/
#include<stdio.h>
struct Student
{
    char name[20]; //id(int) name(char) salary(float)
    int age;
    int rno;  
}s3,s4;
//-> pointer operator 
int main()
{
    struct Student s1,s2;
    printf("Enter the name of student 1: ");
    scanf("%s",s1.name);
    // strcpy(s1.name,"Ravi");
    printf("Enter the age of student 1: ");
    scanf("%d",&s1.age);
    printf("Enter the roll no of student 1: ");
    scanf("%d",&s1.rno);
    printf("Enter the name of student 2: ");
    scanf("%s",s2.name);
    printf("Enter the age of student 2: ");
    scanf("%d",&s2.age);
    printf("Enter the roll no of student 2: "); 
    scanf("%d",&s2.rno);
    printf("Student 1: %s %d %d\n",s1.name,s1.age,s1.rno);
    printf("Student 2: %s %d %d\n",s2.name,s2.age,s2.rno);
}