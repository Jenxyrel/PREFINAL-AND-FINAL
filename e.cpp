#include <iostream>
using namespace std;

int main() {
    // Loop through 8 rows
    for (int i = 0; i < 8; i++) {
        // Cout leading spaces (decreasing with each row)
        for (int j = 0; j < (8 - i - 1) * 3; j++) {
            cout << " ";
        }

        // Cout numbers from 1 to (i+1) with spaces in between
        for (int k = 1; k <= i + 1; k++) {
            cout << " " << k << " ";
        }

        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
