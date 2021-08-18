#include <iostream>
using namespace std;

class Info {        // The class
  public:          // Access specifier
    string FirstName;  // Attribute
    string LastName;  // Attribute
    int year;      // Attribute
    Info(string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class
Info::Info(string x, string y, int z) {
  FirstName = x;
  LastName = y;
  year = z;
}
int main() {
  // Create Car objects and call the constructor with different values
  Info InfoObj1("Annaya", "Parekh", 2009);
  Info InfoObj2("Neev", "Kanani", 2007);
  // Print values
  cout << InfoObj1.FirstName << " " << InfoObj1.LastName << " " << InfoObj1.year << "\n";
  cout << InfoObj2.FirstName << " " << InfoObj2.LastName << " " << InfoObj2.year << "\n";
  return 0;
}