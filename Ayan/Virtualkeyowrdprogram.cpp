#include<bits/stdc++.h>
using namespace std;

#define ll long long int
class Student{
    protected:
    int roll_no;
    public:
    void get_roll_no(int n)
    {
        roll_no=n;
    }
    void put_roll_no()
    {
        cout<<"Roll_no"<<roll_no<<endl;
    }
};

class Test: virtual public Student{
    protected:
    float sub1, sub2;
    public:
    void get_marks(float m1, float m2)
    {
        sub1=m1;
        sub2=m2;
    }
    void put_marks()
    {
        cout<<"Marks of sub1: "<<sub1<<endl<<"Marks of sub2: "<<sub2<<endl;
    }
};

class Sports: virtual public Student{
    protected:
    float score;
    public:
    void get_score(float m3)
    {
        score=m3;
    }
    void put_score()
    {
        cout<<"Score of sports "<<score<<endl;
    }
};

class Result: public Test, public Sports{
    float total;
    public:
    void display();
};

void Result::display()
{
    total=sub1+sub2+score;
    put_roll_no();
    put_marks();
    put_score();
    cout<<"Total marks: "<<total<<endl;
}

int main()
{
    Result r;
    r.get_roll_no(1);
    r.get_marks(90,80);
    r.get_score(100);
    r.display();
    return 0;
}