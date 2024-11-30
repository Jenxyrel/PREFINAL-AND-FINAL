#include <iostream>
using namespace std;

int main() {
    char symbol;
    cout << "Enter symbol: ";
    cin >> symbol;

    // Loop for 8 rows
    for (int i = 0; i < 8; i++) {
        // Cout leading spaces before the first symbol
        cout << string(i, ' ');  // This will print `i` spaces

        // Cout the first symbol
        cout << symbol;

        // Cout spaces between the two symbols
        cout << string(7 - i, ' ');  // This will print `7 - i` spaces between the symbols

        // Cout the second symbol
        if (i < 7) {  // Print the second symbol, except for the last row
            cout << symbol;
        }

        // End the current row
        cout << endl;
    }

    return 0;
}
