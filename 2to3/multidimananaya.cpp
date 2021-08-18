// #include<iostream>

// using namespace std;

// int main()
// {
//     int i, j, a[3][3], b[3][3];//a[3][3] is our apartment
//     cout<<"Enter the values in multidimentsional array1: ";
//     for(i = 0; i< 3; i++)//this loop iterates floors of the apartment
//     {
//         for(j = 0; j<3; j++)//this loop iterates houses on the floor
//         {
//             cin>>a[i][j]; // i is florr number and j is house number
//         }
//     }
//     cout<<"Enter the values in multidimentsional array2: ";
//     for(i = 0; i<3; i++)
//     {
//         for(j = 0; j<3; j++)
//         {
//             cin>>b[i][j];
//         }
//     }
//     cout<<"The addition of array1 and array 2 is : ";
//     for(i = 0; i<3; i++)//this loop iterates floors of the apartment
//     {
//         for(j = 0; j<3; j++)//this loop iterates houses on the floor
//         {
//             cout<<a[i][j] + b[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
	int n,i,fact=1;
	cout<<"Enter a number :";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact = fact*i;
	}	
	cout<<"factorial of "<<n<<" = " <<fact;
	return 0;
}