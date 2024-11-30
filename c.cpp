#include <iostream>
using namespace std;

int main() {

    // Loop through 8 rows
    for (int i = 0; i < 8; i++) {
        // Print leading spaces (starting from 0 spaces to 7 spaces)
        for (int c = 0; c < i; c++) {
            cout << " ";
        }

        // Print "#" characters (starting from 8 # to 1 #)
        for (int c = 0; c < 8 - i; c++) {
            cout << "#";
        }

        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
