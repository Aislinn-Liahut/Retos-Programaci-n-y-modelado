#include <iostream>
using namespace std;

int main()
{
    // Declararando un objeto String
    string cadena;
    cout << "Ingresa una cadena: ";
    //puedes obtener la línea de texto ingresada usando getline().
    getline(cin, cadena); 
    cout << "Ingresaste: " << cadena << endl;
    return 0;
}