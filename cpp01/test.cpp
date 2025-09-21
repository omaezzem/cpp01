#include <iostream>
using namespace std;

class MyClass {
    void greet() {
        cout << "Hello from MyClass!\n";
    }
};

int main() {
    // Declare pointer to member function
    void (MyClass::*funcPtr)() = &MyClass::greet;

    MyClass obj;
    // Call through pointer
    (obj.*funcPtr)();   // need an object
}