#include <iostream>
using namespace std;

int main() {

    // Loop for 8 rows, decrementing the number of "#" printed in each row
    for (int i = 8; i >= 1; i--) {
        // Print "#" for each column in the current row
        for (int b = 1; b <= i; b++) {
            cout << "#";
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}