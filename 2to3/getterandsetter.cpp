#include<iostream>
using namespace std;
class A{
    int a;
    string b;
    public:
        void setdata(int x, string y){
            a = x;
            b = y;
        }
        void getdata(){
            cout<<"x = "<<a<<endl;
            cout<<"y = "<<b<<endl;
        }
};
int main(){
    A user1;
    A user2;
    int soham;
    string joshi;
    cout<<"Enter x: ";
    cin>>soham;
    cout<<"Enter y: ";
    cin>>joshi;
    user1.setdata(soham,joshi);
    user1.getdata();
}