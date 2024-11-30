#include <iostream>
using namespace std;

int main() {
    // Declare symbols
    char firstSymbol, secondSymbol, thirdSymbol;

    // Input symbols
    cout << "Enter 1st symbol: ";
    cin >> firstSymbol;
    cout << "Enter 2nd symbol: ";
    cin >> secondSymbol;
    cout << "Enter 3rd symbol: ";
    cin >> thirdSymbol;

    // Draw the first part (upper triangle)
    for (int i = 0; i < 6; i++) {
        // Cout leading spaces for alignment
        for (int j = 0; j < 20; j++) {
            cout << " ";
        }
        // Cout first symbol in a growing pattern
        for (int j = 0; j < i; j++) {
            cout << " " << firstSymbol;
        }
        // Cout second symbol
        cout << " " << secondSymbol;
        cout << endl;
    }

    // Draw the second part (middle rectangle)
    for (int i = 0; i < 2; i++) {
        // Cout leading spaces for alignment
        for (int j = 0; j < 10; j++) {
            cout << " " << thirdSymbol;
        }
        // Cout first symbol
        for (int j = 0; j < 6; j++) {
            cout << " " << firstSymbol;
        }
        // Cout second symbol
        cout << " " << secondSymbol;
        cout << endl;
    }

    // Draw the third part (lower triangle)
    for (int i = 0; i < 6; i++) {
        // Cout leading spaces for alignment
        for (int j = 0; j < 20; j++) {
            cout << " ";
        }
        // Cout first symbol in a decreasing pattern
        for (int j = i; j < 5; j++) {
            cout << " " << firstSymbol;
        }
        // Cout second symbol
        cout << " " << secondSymbol;
        cout << endl;
    }

    return 0;
}
