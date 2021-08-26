#include<iostream>

using namespace std;

class Laptop{
    int price;
    int weight;
    public:
        Laptop(int p, int w){
            price = p;
            weight = w;
        }
        void show(){
            cout << "Price: " << price << endl;
            cout << "Weight: " << weight << endl;
        }
};

class Asus: public Laptop{
    string name;
    int battery;
    public:
        Asus(string n, int b, int p, int w): Laptop(p, w){
            battery = b;
            name = n;
        }
        void show(){
            cout<<"Name: "<<name<<endl;
            cout << "Battery: " << battery << endl;
            Laptop::show();
        }
};

class Dell: public Laptop{
    int battery;
    string name;
    public:
        Dell(string name, int b, int p, int w): Laptop(p, w){
            battery = b;
            this->name = name;
        }
        void show(){
            cout<<"Name: "<<name<<endl;
            cout << "Battery: " << battery << endl;
            Laptop::show();
        }
};

class Rog: public Laptop{
    int battery;
    string name;
    public:
        Rog(string name, int b, int p, int w): Laptop(p, w){
            battery = b;
            this->name = name;
        }
        void show(){
            cout<<"Name: "<<name<<endl;
            cout << "Battery: " << battery << endl;
            Laptop::show();
        }
};

int main()
{
    Asus a("Asus",70, 20000, 1);
    cout<<endl;
    a.show();
    Dell d("Dell",80, 10000, 2);
    d.show();
    Rog r("Rog",90, 15000, 3);
    r.show();
    return 0;
}