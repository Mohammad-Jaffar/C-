// Write and execute programs to demostrate the use of virtual funciton
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Base* bptr;
    Derived d;
    bptr = &d;
    bptr->show();  // Calls Derived::show() due to virtual function
    return 0;
}
