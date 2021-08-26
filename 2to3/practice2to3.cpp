#include<iostream>

using namespace std;

class Cube{
public:
    int side;
    Cube(int side){
        this->side = side;
    }
    int getVolume(){
        return this->side * this->side * this->side;
    }
    int getarea()
    {
        return 6*this->side*this->side;
    }
};

class Cubeoid{
int l,b,h;
    public:
    Cubeoid(int length,int bredth,int height){
        l = length;
        b = bredth;
        h = height;
    }
    int getVolume(){
        return l * b * h;
    }

    int getarea(){
        return 2*(l*b+b*h+h*l);
    }
};

class StringFunc{
    string str1, str2;
    public:
    void getString()
    {
        cout<<"Enter string 1: ";
        cin>>str1;
        cout<<"Enter string 2: ";
        cin>>str2;
    }
    int strcompare()
    {
        if(str1 == str2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int strlength1()
    {
       return str1.length();
    }
    int strlength2()
    {
        return str2.length();
    }
};
int main()
{
    cout<<"Enter the side of the cube: ";
    int side;
    cin>>side;
    //volume and area of cube
    Cube cube(side);
    cout<<"The volume of the cube is "<<cube.getVolume()<<endl;
    cout<<"The area of the cube is "<<cube.getarea()<<endl;

    //volume and area of cuboid
    cout<<"Enter the length,bredth,height of the cubeoid: ";
    int length,bredth,height;
    cin>>length>>bredth>>height;
    Cubeoid cubeoid(length,bredth,height);
    cout<<"The volume of the cubeoid is "<<cubeoid.getVolume()<<endl;
    cout<<"The area of the cubeoid is "<<cubeoid.getarea()<<endl;

    // //string comparison
    StringFunc strfunc;
    strfunc.getString();
    if(strfunc.strcompare() == 1)
    {
        cout<<"The two strings are equal"<<endl;
    }
    else
    {
        cout<<"The two strings are not equal"<<endl;
    }
    // cout<<"String comparison result: "<<strfunc.strcompare()<<endl;
    cout<<"String length of string 1: "<<strfunc.strlength1()<<endl;
    cout<<"String length of string 2: "<<strfunc.strlength2()<<endl;
    return 0;
}