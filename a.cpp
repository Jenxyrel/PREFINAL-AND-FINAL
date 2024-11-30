#include <iostream>
using namespace std;

int main() {
    // Loop through 9 rows
    for (int i = 0; i < 9; ++i) {
        // Loop through columns
        for (int j = 1; j < 8; ++j) {
            // Alternate between "# *" and " # * " for each position
            cout << ((i + j) % 2 == 0 ? "# *" : " # * ");
        }
        cout << endl;  // New line after each row
    }
    return 0;
}