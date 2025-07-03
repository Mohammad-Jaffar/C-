// Write and execute programs to demonstrate function overloading
#include <iostream>
using namespace std;

// Funciton to adds integers
int add(int a, int b)
{
    return a + b;
}

// Fucntion to adds floats
float add(float x, float y)
{
    return x + y;
}

int main()
{
    cout << "Sum of integers: " << add(5, 10) << endl;
    cout << "Sum of floats: " << add(2.5f, 3.5f) << endl;
    return 0;
}
