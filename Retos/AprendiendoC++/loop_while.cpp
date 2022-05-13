#include <iostream>

using namespace std;

int main() {
    int i = 1;

    // loop del 1 al 5
    while (i <= 5) {
        cout << i << " ";
        ++i;
    }


    //Hacemos la suma de numeros positivos si el usuario ingresa un número
    // negativo, el ciclo termina.
    int numero;
    int sum = 0;

    // take input from the user
    cout << "Enter a numero: ";
    cin >> numero;

    while (numero >= 0) {
        sum += numero;

        // toma otro input
        cout << "Enter a numero: ";
        cin >> numero;
    }

    cout << "\nThe sum is " << sum << endl;





    int j = 1;

    // do...while loop from 1 to 5
    do {
        cout << j << " ";
        ++j;
    }
    while (j <= 5);

    return 0;
}