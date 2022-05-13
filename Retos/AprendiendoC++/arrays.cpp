#include <iostream>
using namespace std;

int main() {

    int calificaciones[5] = {9, 10, 6, 8, 9};

    cout << "Las calificaciones son: ";


    for (int i = 0; i < 5; ++i) {
      cout << calificaciones[i] << "  ";
    }

    cout << "\n";

    // cambia el 4to elemento a 9
    calificaciones[3] = 9;

    cout << "Se cambio la calificación del alumno 4 a 9. Las calificaciones ahora son: ";

    for (int i = 0; i < 5; ++i) {
      cout << calificaciones[i] << "  ";
    }

    cout << "\n";


    // toma la entrada del usuario
    cout << "Nueva calificación para alumno 3: ";
    // almacena el valor en la tercera posición
    cin >> calificaciones[2];

    cout << "Las calificaciones actualizadas son: ";


    for (int i = 0; i < 5; ++i) {
      cout << calificaciones[i] << "  ";
    }

    cout << "\n";


    int alumno;
    int calificacion;
    // toma la entrada del usuario
    cout << "Alumno a cambiar: ";
    // almacena el valor en alumno
    cin >> alumno;
    // toma la entrada del usuario
    cout << "Nueva calificación: ";
    // almacena el valor en calificacion
    cin >> calificacion;

    calificaciones[alumno-1] = calificacion;

    cout << "Las calificaciones actualizadas son: ";

    for (int i = 0; i < 5; ++i) {
      cout << calificaciones[i] << "  ";
    }

    cout << "\n";



    // imprime el primer elemento del arreglo
    cout << "El primer elemento del arreglo es " << calificaciones[0] << endl;

    // imprime el elemento en la posición i del arreglo
    int i;

    cout << "¿La calificación de qué alumno quiere ver? " << endl;

    // almacena el valor en i
    cin >> i;

    // imprime la calificacion solicitada
    cout << "Calificación: " << calificaciones[i-1] << endl;

    return 0;
}