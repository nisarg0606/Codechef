// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 20;
//     char b = 'a';
//     float c = 3.14;
//     double d = 2.71828;
//     long e = 2147483648;
//     short f = -32768;
//     unsigned int g = 4294967295;
//     unsigned short i = 65535;

//     cout<<"Int: "<<sizeof(a)<<endl;
//     cout<<"Char: "<<sizeof(b)<<endl;
//     cout<<"Float: "<<sizeof(c)<<endl;
//     cout<<"Double: "<<sizeof(d)<<endl;
//     cout<<"Long: "<<sizeof(e)<<endl;
//     cout<<"Short: "<<sizeof(f)<<endl;
//     cout<<"Unsigned int: "<<sizeof(g)<<endl;
//     // cout<<"Unsigned long: "<<sizeof(h)<<endl;
//     cout<<"Unsigned short: "<<sizeof(i)<<endl;
//     // cout<<"Boolean: "<<sizeof(j)<<endl;
//     return 0;
// }

// C program to illustrate differences
// between structure and Union
#include<iostream>
#include<cstring>
using namespace std;

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
	// Initializing the struct and creating the variables
	struct struct_example s1 = {20, 3.14, "Sachin"};

	// Initializing the union and creating the variables
	union union_example u1;
	u1.integer = 20;
	u1.decimal = 3.14;
	strcpy(u1.name, "Sachin");

	// Printing the values of the variables
	cout<<"Integer value of s1 is: "<<s1.integer<<endl;
	cout<<"Decimal value of s1 is: "<<s1.decimal<<endl;
	cout<<"Name value of s1 is: "<<s1.name<<endl;

	cout<<"Integer value of u1 is: "<<u1.integer<<endl;
	cout<<"Decimal value of u1 is: "<<u1.decimal<<endl;
	cout<<"Name value of u1 is: "<<u1.name<<endl;

	cout<<"The size of structure is: "<<sizeof(struct_example)<<endl;
	cout<<"The size of union is: "<<sizeof(union_example)<<endl;
	
	return 0;
}

/*
CHAR ARRAY
STRLEN
NESTED FOR LOOP
N E E V
N E E V
N E E V
N E E V
N E E V

A N A N Y Y A
A N A N Y Y A
A N A N Y Y A
A N A N Y Y A
A N A N Y Y A
*/
