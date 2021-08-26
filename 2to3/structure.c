#include<stdio.h>

struct Employee{
    char name[20];
    int age;
    int id;
    float salary;
};

int main()
{
    struct Employee emp1,emp2;
    printf("Enter name: ");
    scanf("%s", emp1.name);
    printf("Enter age of the employee: ");
    scanf("%d", &emp1.age);
    printf("Enter the id: ");
    scanf("%d", &emp1.id);
    printf("Enter the salary: ");
    scanf("%f", &emp1.salary);
    printf("Enter name: ");
    scanf("%s", emp2.name);
    printf("Enter age of the employee: ");
    scanf("%d", &emp2.age);
    printf("Enter the id: ");
    scanf("%d", &emp2.id);
    printf("Enter the salary: ");
    scanf("%f", &emp2.salary);
    //printing the values
    printf("The name of the employee 1 is %s", emp1.name);
    printf("\nThe age of the employye 1 is: %d", emp1.age);
    printf("\nThe id of the employee 1 is: %d", emp1.id);
    printf("\nThe salary of the employee 1 is: %f", emp1.salary);
    printf("\nThe name of the employee 2 is %s", emp2.name);
    printf("\nThe age of the employye 2 is: %d", emp2.age);
    printf("\nThe id of the employee 2 is: %d", emp2.id);
    printf("\nThe salary of the employee 2 is: %f", emp2.salary);
}