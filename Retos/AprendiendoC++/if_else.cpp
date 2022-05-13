#include <iostream>
using namespace std;

int main() {

  int numero;

  cout << "Digita un entero: ";
  cin >> numero;

  if (numero > 0) {
    cout << "Ingresaste un entero positivo: " << numero << endl;
  }




  int numero2;

  cout << "Digita un entero: ";
  cin >> numero2;

  if (numero2 >= 0) {
    cout << "Ingresaste un entero positivo: " << numero2 << endl;
  }
  else {
    cout << "Ingresaste un entero negativo: " << numero2 << endl;
  }





  int numero3;

  cout << "Digita un entero: ";
  cin >> numero3;

  if (numero3 > 0) {
    cout << "Ingresaste un entero positivo: " << numero3 << endl;
  }
  else if (numero3 < 0) {
    cout << "Ingresaste un entero negativo: " << numero3 << endl;
  }
  else {
    cout << "Ingresaste un 0." << endl;
  }


  return 0;
}