#include <iostream>
using namespace std;

int main() {
    // Ejemplo 1
    cout << "Ejemplo 1:" << endl;
    int test1[2][3] = {{2, 4, 5},
                      {9, 0, 19}};


    // uso un ciclo for anidado para
    // acceder a las filas de la matriz
    for (int i = 0; i < 2; ++i) {

        for (int j = 0; j < 3; ++j) {
            cout << "test1[" << i << "][" << j << "] = " << test1[i][j] << endl;
        }
    }

    cout << " " << endl;


    // Ejemplo 2
    cout << "Ejemplo 2:" << endl;
    int test2[3][2] = {{2, -5},
                      {4, 0},
                      {9, 1}};


    // uso un ciclo for anidado para
    // acceder a las filas de la matriz
    for (int i = 0; i < 3; ++i) {

        for (int j = 0; j < 2; ++j) {
            cout << "test2[" << i << "][" << j << "] = " << test2[i][j] << endl;
        }
    }

    return 0;
}