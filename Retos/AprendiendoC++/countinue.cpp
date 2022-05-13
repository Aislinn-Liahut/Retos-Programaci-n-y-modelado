#include <iostream>
using namespace std;

int main() {
    // Ejemplo1
    // programa que imprime el valor de i
    for (int i = 1; i <= 10; i++) {
        if (i == 3) {
            continue;
        }
        if (i == 7) {
            continue;
        }

        cout << i << endl;
    }

    //Ejemplo2
    // programa para sumar números positivos hasta 50 solamente
    // si el usuario ingresa un número negativo,
    // ese número se omite del calculo.

    // número negativo -> terminación del ciclo
    // números por encima de 50 -> saltar iteración

    int suma = 0;
    int numero = 0;

    while (numero >= 0) {
        suma += numero;

        // entrada dada por el usuario
        cout << "Ingresa un número: ";
        cin >> numero;

        if (numero > 50) {
            cout << "El número es mayor que 50 y no sera sumado." << endl;
            numero = 0;  // el valor de numero se define como 0 otra vez
            continue;
        }
    }

    cout << "La suma es " << suma << endl;

    return 0;
}