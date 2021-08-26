#include<iostream>

using namespace std;

class arithmetic_{
    protected:
        int num1, num2;
    public:
        void getdata()
        {
            cout<<"For Addition: ";
            cout<<"\nEnter first number: ";
            cin>>num1;
            cout<<"\nEnter second number: ";
            cin>>num2;
        }
};

class plus_: public arithmetic_{
    public:
        int sum;
        void add()
        {
            sum=num1+num2;
        }
};

class minus_{
    public:
        int difference, n1, n2;
        void sub()
        {
            cout<<"\nFor Subtraction: ";
            cout<<"\nEnter first number: ";
            cin>>n1;
            cout<<"\nEnter second number: ";
            cin>>n2;
            difference=n1-n2;
        }   
};

class result: public plus_, public minus_{
    public:
        void display()
        {
            cout<<"\nThe sum of "<<num1<<" and "<<num2<<" is "<<sum<<".";
            cout<<"\nThe difference of "<<n1<<" and "<<n2<<" is "<<difference<<".";
    }
};

int main()
{
    result z;
    z.getdata();
    z.add();
    z.sub();
    z.display();
    return 0;
}
