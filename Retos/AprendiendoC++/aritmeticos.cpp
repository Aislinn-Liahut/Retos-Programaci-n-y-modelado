#include <iostream>
using namespace std;

int main() {
    double a, b;
    a = 7;
    b = 2;

    cout << "a es igual a " << a << endl;

    cout << "b es igual a " << b << endl;

    cout << "a + b = " << (a + b) << endl;

    cout << "a - b = " << (a - b) << endl;

    cout << "a * b = " << (a * b) << endl;

    cout << "a / b = " << (a / b) << endl;

    //cout << "a % b = " << (a % b) << endl;

    int result_a, result_b;

    result_a = ++a;
    cout << "El resultado de aplicarle el operador de incremento a la variable a es: " << result_a << endl;

    result_b = --b;
    cout << "El resultado de aplicarle el decremento a la variable b es: " << result_b << endl;

    return 0;
}