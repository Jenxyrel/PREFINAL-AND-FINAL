#include <iostream>
using namespace std;

int main() {
    // Loop through 8 rows
    for (int i = 1; i <= 8; i++) {
        // Cout numbers from i down to 1
        for (int j = i; j >= 1; j--) {
            cout << j << " ";  // Cout the number followed by a space
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}