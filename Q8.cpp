// Write and execute programs to demonstrate the use of default constructor, parameterized constructor and copy constructor
#include <iostream>
using namespace std;

class Student {
    string Name;
    int Id;

public:
    // Default constructor
    Student() {
        Name = "Ali";
        Id = 0;
    }

    // Parameterized constructor
    Student(string N, int I) {
        Name = N;
        Id = I;
    }

    // Copy constructor
    Student(const Student &Stu) {
        Name = Stu.Name;
        Id = Stu.Id;
    }

    void display() {
        cout << " Name : " << Name << " & ID : " << Id << endl;
    }
};

int main() {
    Student s1;
    Student s2( "ALi", 16);
    Student s3 = s2;

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
