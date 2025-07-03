// // Write and execute program to demonstrate the concept of inheritance
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string Name;
    int Age;
};

class Student : public Person
{
public:
    int rollno;

    Student(string Name, int Age, int rollno)
    {
        this->Name = Name;
        this->Age = Age;
        this->rollno = rollno;
    }
    void GetInfo()
    {
        cout << "Name : " << Name << endl;
        cout << "Age : " << Age << endl;
        cout << "Roll no : " << rollno << endl;
    }
};

int main()
{
    Student S1("Ahmad", 21, 15);
    S1.GetInfo();
    return 0;
}
