// Write and execute program to demonstrate the concept of polymorphism
#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a shape." << endl;
    }
};

// Derived class
class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a circle." << endl;
    }
};

int main()
{
    Shape *s; // Base class pointer
    Circle c; // Derived class object
    s = &c;
    s->draw(); // Calls Circle’s version (polymorphism)
    return 0;
}
