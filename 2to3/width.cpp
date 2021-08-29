#include<iostream>
using namespace std;
int main()
{
    int item[4] = {10, 8, 12, 15};
    int cost[4] = {100, 80, 120, 150};
    cout<<"ITEMS";
    cout.width(6);/*set width of the field*/ 
    cout<<"*";
    cout.width(10);/*set width of the field*/ 
    cout<<"COST";
    cout.width(10);
    // cout.width(5);/*set width of the field*/ 
    cout<<"TOTAL"<<endl;
    int i, sum =0 ;
    for(i = 0; i < 4; i++)
    {
        cout<<item[i];
        cout.width(18);/*set width of the field*/
        cout<<cost[i];
        cout.width(10);/*set width of the field*/
        cout<<item[i]*cost[i]<<endl;
        sum = sum + (item[i]*cost[i]);
    }
    cout<<endl;
    cout.width(15);
    cout<<"TOTAL COST = "<<sum<<endl;
}