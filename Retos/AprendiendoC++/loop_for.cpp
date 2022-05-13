#include <iostream>

using namespace std;

int main() {

    // Loop del 1 al 5
    for (int i = 1; i <= 10; ++i) {
        cout << "Hola" << endl;
    }



    // Encuentra la suma de los primeros n números naturales enteros positivos
    int num, sum;
    sum = 0;

    cout << "Ingresaste un entero positivo: ";
    cin >> num;

    for (int i = 1; i <= num; ++i) {
        sum += i;
    }

    cout << "Sum = " << sum << endl;


    // Loop basado en un rango
    char num_array[] = {'h', 'o', 'l', 'a'};

    for (char n : num_array) {
        cout << n << " ";
    }



    return 0;
}