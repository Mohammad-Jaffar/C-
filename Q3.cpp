// Write and execute progrmas basedd on use of functions
#include <iostream>
using namespace std;

// Function declaration
int add(int x, int y)
{
    return x + y;
}

int main()
{
    int a = 5, b = 10;
    // Function call
    int result = add(a, b);
    cout << "Sum = " << result << endl;
    return 0;
}
