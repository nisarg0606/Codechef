#include<iostream>
using namespace std;
int main(){
    int items[4] = {10, 8, 12, 15};
    int cost[4] = {75, 100, 60, 99};
    cout.width(5);
    cout<<"ITEMS";
    cout.width(8);
    cout<<"COST";
    cout.width(15);
    cout<<"Total Value"<<endl;
    int sum = 0;
    for(int i = 0; i < 4; i++){
        cout.width(5);
        cout<<items[i];
        cout.width(8);
        cout<<cost[i];
        cout.width(15);
        int value = items[i] * cost[i];
        cout<<value<<endl;
        sum = sum + value;
    }
    cout<<"Grand Total : "<<sum<<endl;
    return 0;
}