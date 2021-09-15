#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char * string1 ="Reyaansh";
	char * string2 = "Desai";
	int m = strlen(string1);
	int n = strlen(string2);
	for(int i=1; i<=m; i++)
	{
		cout.write(string1, i);
		cout<<"\n";
	}
	for(int j=n; j>0; j--)
	{
		cout.write(string2, j);
		cout <<"\n";
	}// concatenating strings
	cout.write(string1, m).write(string2, n);
	cout<<"\n"; //crossing the boundary
	cout.write(string1, 10);
	return 0;
}