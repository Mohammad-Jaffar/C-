// Write and execute programs to demonstrate the use of static variable and static functions
#include <iostream>
using namespace std;

class Room {
    // Static variable - shared by all objects
    static int blackboard;

public:
    // A regular function that modifies the static variable
    void writeOnBoard() {
        // Increases the shared blackboard value
        blackboard++;
    }

    // Static function - can access only static members
    static void showBoard() {
        cout << "Blackboard has: " << blackboard << " writings." << endl;
    }
};

// Definition and initialization of static variable
int Room::blackboard = 0;

int main() {
    Room student1, student2;
    
    // First student writes
    student1.writeOnBoard(); 
    // Second student writes
    student2.writeOnBoard(); 

    // Display the current count on the blackboard using static function
    Room::showBoard();

    return 0;
}
