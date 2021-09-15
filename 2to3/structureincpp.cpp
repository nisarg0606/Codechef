#include<iostream>
#include<string.h>
using namespace std;
struct Student{
    int roll;
    char name[20];
    int marks;
};
struct Patient{
    float height;
    float weight;
    char name[20];
};
int main(){
    struct Student s1;
    struct Student s2[3];
    for(int i=0;i<3;i++){
        cout<<"Enter roll number: ";
        cin>>s2[i].roll;
        cout<<"Enter name: ";
        cin>>s2[i].name;
        cout<<"Enter marks: ";
        cin>>s2[i].marks;
    }
    s1.roll = 1;
    s1.marks = 100;
    strcpy(s1.name, "John");
    printf("%d %s %d\n", s1.roll, s1.name, s1.marks);
    cout<< sizeof(s1)<<endl;
    struct Patient p1 = {5.5, 80.0, "John"};
    cout<< sizeof(p1)<<endl;
    cout<< p1.height<<endl;
    cout<< p1.weight<<endl;
    cout<< p1.name<<endl;
    return 0;
}