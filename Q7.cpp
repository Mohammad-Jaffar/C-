#include <iostream>
using namespace std;

class Practical
{
public:
    // Accessible anywhere
    int From_Public;

private:
    // Only inside the class
    int From_Private;

protected:
    // Accessible in class and derived classes
    int From_Protected;

public:
    void setValues(int Public, int Protected, int Private)
    {
        From_Public = Public;
        From_Private = Private;
        From_Protected = Protected;
    }

    void showValues()
    {
        cout << "Public: " << From_Public << endl;
        cout << "Private: " << From_Private << endl;
        cout << "Protected: " << From_Protected << endl;
    }
};

// Derived class to demonstrate protected access
class Derived : public Practical
{
public:
    void showProtected()
    {
        // From_Protected is accessible here
        cout << "Accessing protected member from derived class: " << From_Protected << endl;
    }
};

int main()
{
    Practical P1;
    P1.setValues(10, 20, 30);
    P1.showValues();

    // Direct access from main
    cout << "Direct access from main():" << endl;
    cout << "Public member: " << P1.From_Public << endl;

    Derived D1;
    D1.setValues(100, 200, 300);
    D1.showValues();
    D1.showProtected();

    return 0;
}
