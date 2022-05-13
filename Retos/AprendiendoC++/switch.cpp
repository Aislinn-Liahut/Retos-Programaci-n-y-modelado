// Programa para construir una calculadora simple usando la instrucción switch
#include <iostream>
using namespace std;

int main() {
    char operador;
    float num1, num2;
    cout << "Ingresa un operador (+, -, *, /): ";
    cin >> operador;
    cout << "Ingresa dos números: " << endl;
    cin >> num1 >> num2;

    switch (operador) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // el operador no coincide con ninguna constante valida (+, -, *, /)
            cout << "Error! El operador no es correcto";
            break;
    }

    return 0;
}