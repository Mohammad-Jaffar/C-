// Write and execute programs to demonstrate destructor
#include <iostream>
using namespace std;

class Student
{
public:
// Constructor
    Student()
    {
        cout << "Constructor called." << endl;
    }
// Destructor
    ~Student()
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    Student S;
    return 0;
}
