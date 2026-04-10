#include <iostream>
using namespace std;

int main() {
    int value;

    cout << "Enter an integer between 5 and 10: ";
    cin >> value;

    // Loop until valid integer in range is entered
    while (cin.fail() || value < 5 || value > 10) {

        // Check if input was not an integer
        if (cin.fail()) {
            cin.clear(); // clear error flag
            cin.ignore(1000, '\n'); // discard invalid input
            cout << "Invalid input. Please enter an INTEGER between 5 and 10: ";
        } 
        else {
            cout << "Number : "<< value << " is out of range. Please enter an integer between 5 and 10: ";
        }

        cin >> value; // ask again
    }

    // After valid input
    cout << "Your input value: " <<  value << " has been accepted." << endl;

    return 0;
}