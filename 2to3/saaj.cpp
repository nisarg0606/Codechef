#include<iostream>
using namespace std;
class Student{
    public:
        int sid;
        char name[50];
};

class Arts: public Student{
    public:
        int numberofStudents;
        Arts(int n){
            numberofStudents = n;
        }
};

class Commerce: public Student{
    public:
        int numberofStudents;
        Commerce(int n){
            numberofStudents = n;
        }
};

class Engineering: public Student{
    public:
        int numberofStudents;
        Engineering(){

        }
};

class Computer: public Engineering{
    public:
        int numberofStudents;
        Computer(int n){
            numberofStudents = n;
        }
};

class Civil: public Engineering{
    public:
        int numberofStudents;
        Civil(int n){
            numberofStudents = n;
        }
};

class Automobile: public Engineering{
    public:
        int numberofStudents;
        Automobile(int n){
            numberofStudents = n;
        }
};

int main()
{
    Arts a(10);
    Commerce c(20);
    Computer comp(40);
    Automobile aut(30);
    Civil civil(50);
    if(a.numberofStudents > c.numberofStudents &&  a.numberofStudents > comp.numberofStudents && a.numberofStudents > civil.numberofStudents && a.numberofStudents > aut.numberofStudents){
        cout<<"Arts"<<endl;
    }
    else if(c.numberofStudents > a.numberofStudents && c.numberofStudents > comp.numberofStudents && c.numberofStudents > civil.numberofStudents && c.numberofStudents > aut.numberofStudents){
        cout<<"Commerce"<<endl;
    }
    else if(comp.numberofStudents > a.numberofStudents && comp.numberofStudents > c.numberofStudents &&  comp.numberofStudents > civil.numberofStudents && comp.numberofStudents > aut.numberofStudents){
        cout<<"Computer"<<endl;
    }
    else if(civil.numberofStudents > a.numberofStudents && civil.numberofStudents > c.numberofStudents  && civil.numberofStudents > comp.numberofStudents && civil.numberofStudents > aut.numberofStudents){
        cout<<"Civil"<<endl;
    }
    else if(aut.numberofStudents > a.numberofStudents && aut.numberofStudents > c.numberofStudents && aut.numberofStudents > comp.numberofStudents && aut.numberofStudents > civil.numberofStudents){
        cout<<"Automobile"<<endl;
    }
    else{
        cout<<"All classes are equal"<<endl;
    }
    return 0;
}