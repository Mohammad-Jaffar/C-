// Write and execute programs to show the use of different types of operators
#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;

    // Arithmetic operators
    cout << "Sum is = " << (a + b) << endl;
    cout << "Difference is = " << (a - b) << endl;
    cout << "Multiplication is = " << (a * b) << endl;
    cout << "Division is = " << (a / b) << endl;
    cout << "Remainder is = " << (a % b) << endl;

    // Relational operators
    cout << "Is a > b? " << (a > b) << endl;
    cout << "Is a < b? " << (a < b) << endl;
    cout << "Is a >= b? " << (a >= b) << endl;
    cout << "Is a <= b? " << (a <= b) << endl;
    cout << "Is a == b? " << (a == b) << endl;
    cout << "Is a != b? " << (a != b) << endl;

    // Logical operators
    cout << "Logical NOT (a < b) = " << !(a < b) << endl;
    cout << "Logical AND (a > 0 && b > 0) = " << ((a > 0) && (b > 0)) << endl;
    cout << "Logical OR (a > 0 || b < 0) = " << ((a > 0) || (b < 0)) << endl;

    // Unary operators
    cout << "Value of a before increment: " << a << endl;
    cout << "Post-increment (a++) = " << a++ << endl;
    cout << "Value of a after post-increment: " << a << endl;

    cout << "Pre-decrement (--b) = " << --b << endl;
    cout << "Value of b after pre-decrement: " << b << endl;

    return 0;
}
