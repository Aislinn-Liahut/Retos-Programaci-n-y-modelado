#include <iostream>
using namespace std;

int main() {
    // Ejemplo1
    // programa que imprime el valor de i
    for (int i = 1; i <= 10; i++) {

        if (i == 7) {
            break;
        }
        cout << i << endl;
    }

    //Ejemplo2
    //programa para hallar la suma de numeros positivos
    // si el usuario ingresa números negativos, break finaliza el ciclo
    // el número negativo ingresado no se suma a la suma

    int numero;
    int suma = 0;

    while (true) {
        // entrada dada por el usuario
        cout << "Ingresa un número: ";
        cin >> numero;

        if (numero < 0) {
            break;
        }

        suma += numero;
    }

    cout << "La suma es " << suma << endl;

return 0;
}