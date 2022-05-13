#include <iostream>
using namespace std;

int main() {
    bool resultado;

    resultado = (3 != 5) && (3 < 5);     // true
    cout << "(3 != 5) && (3 < 5) es " << resultado << endl;

    resultado = (3 == 5) && (3 < 5);    // false
    cout << "(3 == 5) && (3 < 5) es " << resultado << endl;

    resultado = (3 == 5) && (3 > 5);    // false
    cout << "(3 == 5) && (3 > 5) es " << resultado << endl;

    resultado = (3 != 5) || (3 < 5);    // true
    cout << "(3 != 5) || (3 < 5) es " << resultado << endl;

    resultado = (3 != 5) || (3 > 5);    // true
    cout << "(3 != 5) || (3 > 5) es " << resultado << endl;

    resultado = (3 == 5) || (3 > 5);    // false
    cout << "(3 == 5) || (3 > 5) es " << resultado << endl;

    resultado = !(5 == 2);    // true
    cout << "!(5 == 2) es " << resultado << endl;

    resultado = !(5 == 5);    // false
    cout << "!(5 == 5) es " << resultado << endl;

    return 0;
}