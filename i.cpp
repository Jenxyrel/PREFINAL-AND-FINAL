#include <iostream>
using namespace std;

int main() {
    // top pattern
    for (int i = 0; i < 6; i++) {
        cout << string(10, ' ') << string(i, '^') << "*" << endl;
    }

    // middle pattern
    for (int i = 0; i < 2; i++) {
        cout << string(10, '#') << string(6, '^') << "*" << endl;
    }

    // bottom pattern
    for (int i = 0; i < 6; i++) {
        cout << string(10, ' ') << string(5 - i, '^') << "*" << endl;
    }

    return 0;
}