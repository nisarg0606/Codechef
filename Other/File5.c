// write a program to create a fie called dictionary.dat that containes the information such as Name, Surname, City and phone number. Write a program that accepts a City and displays the information of all the people who live in that city.
// Language: c
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp;
    fp = fopen("dictionary.dat", "w");
    if (fp == NULL)
    {
        printf("File not found\n");
        return 0;
    }
    char name[100], surname[100], city[100], phone[100];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter name\n");
        scanf("%s", name);
        printf("Enter surname\n");
        scanf("%s", surname);
        printf("Enter city\n");
        scanf("%s", city);
        printf("Enter phone number\n");
        scanf("%s", phone);
        fprintf(fp, "%s %s %s %s\n", name, surname, city, phone);
    }
    fclose(fp);
    fp = fopen("dictionary.dat", "r");
    if (fp == NULL)
    {
        printf("File not found\n");
        return 0;
    }
    printf("Enter the city you want to search\n");
    char search[100];
    scanf("%s", search);
    while ((fscanf(fp, "%s %s %s %s", name, surname, city, phone)) != EOF)
    {
        if (strcmp(city, search) == 0)
        {
            printf("%s %s %s %s\n", name, surname, city, phone);
        }
    }
    fclose(fp);
    return 0;
}