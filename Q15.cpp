// WRITE AND EXECUTE PROGRAM TO SHOW THE USE OF FRIEND FUCNTION
#include <iostream>
#include <string>
using namespace std;

class Distance
{
private:
    int meter;
    // friend function declaration
    friend int addFive(Distance);

public:
    Distance() : meter(0) {} // constructor
};

// friend function definition
int addFive(Distance d)
{
    // access and modify private data
    d.meter += 5;
    return d.meter;
}

int main()
{
    Distance D;
    cout << "Distance : " << addFive(D) << endl; // call friend function
    return 0;
}
