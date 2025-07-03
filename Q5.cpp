// Write and execute programs to demonstrate inline functions
#include <iostream>
using namespace std;

// Inline function
// Code is directly inserted where called
inline int square(int x)
{
    // Returns square of x
    return x * x;
}

int main()
{
    int num ;
    cout << "Ente a number :" ;
    cin >> num;
    // Uses inline function
    cout << "Square of " << num << " is " << square(num) << endl;
    return 0;
}
