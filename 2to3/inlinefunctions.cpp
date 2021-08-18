#include<iostream>

using namespace std;

// inline function-header{
//     function-body
// }

inline double cube(double a){
    return (a*a*a);
}

inline double add(double a, double b)
{
    return a + b;
}//sub //div // mul // modulo // pow // 
int main()
{
    cout << "The cube of 3 is " << cube(3) << endl;
    cout << "The sum of 3 and 4 is " << add(3,4) << endl;
}