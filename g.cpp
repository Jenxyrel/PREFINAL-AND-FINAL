#include <iostream>
using namespace std;

int main() {
    char symbol;
    cout << "Enter symbol: ";
    cin >> symbol;

    // Loop to print 5 rows
    for (int i = 0; i < 5; i++) {
        // If the row number is odd (i.e., i = 1, 3), add two spaces at the beginning
        if (i % 2 == 1) {
            cout << "  ";  // Two spaces before the symbols
        }

        // Loop to print 7 symbols per row
        for (int j = 0; j < 7; j++) {
            cout << symbol << " ";  // Print symbol followed by a space
        }

        // Move to the next line after printing one row
        cout << endl;
    }

    return 0;
}