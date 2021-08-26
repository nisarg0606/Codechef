#include<stdio.h>
#include<string.h>

struct struct_example{
    int integer;
    float decimal;
    char name[20];
};

union union_example{
    int integer;
    float decimal;
    char name[20];
};

int main()
{
    //initialize struct
    struct struct_example s1 = {1,2.3,"hello"};

    //initialize union
    union union_example u1;

    u1.integer = 1;
    u1.decimal = 2.3;
    strcpy(u1.name,"hello");

    printf("%d\n", s1.integer);
    printf("%.2f\n", s1.decimal);
    printf("%s\n", s1.name);

    printf("%d\n", u1.integer);
    printf("%f\n", u1.decimal);
    printf("%s\n", u1.name);

    printf("The size of struct is: %d\n", sizeof(struct struct_example));
    printf("The size of union is: %d\n", sizeof(union union_example));

    return 0;
}