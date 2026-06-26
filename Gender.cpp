#include <iostream>
using namespace std;

int main() {
    char gender_input;

   cout << "GCTU Gender Determination System" << endl;
   cout << "--------------------------------" << endl;
   cout << "Enter gender character (M/m for Male, F/f for Female): " << endl;

    cin >> gender_input;

    // Determine gender using a switch statement
    switch (gender_input) {
        case 'M':
        case 'm':
            cout << "Result: The specified gender is Male." << endl;
         break;
            
        case 'F':
        case 'f':
            cout << "Result: The specified gender is Female." <<endl;
        break;
            
        default:
            cout << "Error: Invalid character entered. Please use M, m, F, or f." << endl;
          break;
    }

    return 0;
}