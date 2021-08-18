#include <iostream>
using namespace std;
class Wheel
{
    int weight, height;

public:
    void ScanWheelDetails()
    {
        cout << "\nWheel Details" << endl;
        cout << "Enter Wheel Weight: ";
        cin >> weight;
        cout << "Enter wheel Height: ";
        cin >> height;
    }
    void showWheelDetails()
    {
        cout << "\nWheel weight:" << weight << endl;
        cout << "Wheel height:" << height << endl;
    }
};

class Engine
{
    int power;

public:
    void ScanEngineDetails()
    {
        cout << "\nEngine Details" << endl;
        cout << "Enter Engine Power: ";
        cin >> power;
    }
    void showEngineDetails()
    {
        cout << "\nEngine Power:" << power << endl;
    }
};

class Car : public Wheel, public Engine
{
public:
    int speed;
    void ScanCarDetails()
    {
        cout << "\nCar Details" << endl;
        cout << "Enter Car Speed: ";
        cin >> speed;
    }
    void showCarDetails()
    {
        cout << "\nCar Speed:" << speed << endl;
    }
};
int main()
{
    Car car;
    car.ScanWheelDetails();
    car.ScanEngineDetails();
    car.ScanCarDetails();
    car.showCarDetails();
    car.showWheelDetails();
    car.showEngineDetails();
    return 0;
}

/*
CHAR ARRAY
STRLEN
NESTED FOR LOOP
S O H A M
S O H A M
S O H A M
S O H A M
S O H A M

S
S O
S O H
S O H A
S O H A M
*/