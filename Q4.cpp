#include <iostream>
using namespace std;

// Call by value
// Changes do NOT affect original variable
void callByValue(int x)
{
    x += 10;
    cout << "callByValue : " << x << endl;
}

// Call by reference
// Changes DO affect original variable
void callByReference(int &y)
{
    y += 10;
    cout << "callByReference: " << y << endl;
}

int main()
{
    int a = 5;
    int b = 5;
    // Call by value example
    callByValue(a);
    cout << "After callByValue, a = " << a << endl; // a stays same
    // Call by reference example
    callByReference(b);
    cout << "After callByReference, b = " << b << endl; // b is changed

    return 0;
}
