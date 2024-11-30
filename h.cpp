#include <iostream>
using namespace std;

int main() {
    char first_symbol, second_symbol;
    
    // Prompt user to enter the two symbols
    cout << "Enter 1st symbol: ";
    cin >> first_symbol;
    cout << "Enter 2nd symbol: ";
    cin >> second_symbol;
    
    // Upper part of the pattern
    for (int i = 0; i <= 8; i++) {
        // Cout spaces and the first symbol
        for (int j = 0; j < i; j++) {
            cout << " " << first_symbol;
        }
        // Cout the second symbol
        cout << " " << second_symbol << endl;
    }

    // Lower part of the pattern (mirror of the upper part)
    for (int i = 8; i >= 0; i--) {
        // Cout spaces and the first symbol
        for (int j = 0; j < i; j++) {
            cout << " " << first_symbol;
        }
        // Cout the second symbol
        cout << " " << second_symbol << endl;
    }

    return 0;
}