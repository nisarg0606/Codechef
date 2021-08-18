#include<iostream>

using namespace std;

class Line{
    int len;
    public:
        Line();
        ~Line();
        void getLenght(){
            cout<<"lenght: "<<len<<endl;
        }
        void setLenght(double len)
        {
            this->len = len;
        }
};

Line::Line(void)
{
    cout<<"Object is Created"<<endl;
    cout<<"Constructor is called"<<endl;
}

Line::~Line(void)
{
    cout<<"Object is Destroyed"<<endl;
    cout<<"Destructor is called"<<endl;
}

int main()
{
    Line line;
    int l;
    cout<<"Enter the lenght of the line: ";
    cin>>l;
    line.setLenght(l);
    line.getLenght();
    return 0;
}