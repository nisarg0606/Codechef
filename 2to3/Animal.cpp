#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n" ;
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "Bhav Bhav \n" ;
    }
};

// Derived class
class Cat : public Animal {
  public:
    void animalSound() {
      cout << "Meow\n" ;
    }
};

int main() {
  Animal myAnimal;
  Dog myDog;
  Cat myCat;

  myAnimal.animalSound();
  myDog.animalSound();
  myCat.animalSound();
  return 0;
}
