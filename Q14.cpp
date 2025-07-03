// Write and execute programs to demonstrate the use of pure virtual funcitons
#include <iostream>
using namespace std;

// Abstract class
class Shape
{
public:
    virtual void draw() = 0; // Pure virtual function
};

// Concrete class
class Rectangle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a rectangle." << endl;
    }
};

int main()
{
    Rectangle r;
    // Calls the implemented function
    r.draw(); 
    return 0;
}
