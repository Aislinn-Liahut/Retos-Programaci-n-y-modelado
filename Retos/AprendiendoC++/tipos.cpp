#include <iostream>
using namespace std;

int main()
{
  // Integers
  int edad = 22;
  int salario = 200;

  // Float
  float base = 5.5;
  float altura = 7.8;
  float resultado;
  resultado = base*altura;

  // Double
  double volumen = 134.64534;

  // Char
  char letra = 'h';

  //Bool
  bool cond = false;

  cout << "Edad: " << edad << " años" << endl;  //endl genera un salto de linea
  cout << "Salario: " << salario << endl;  //endl genera un salto de linea
  cout << "El area de un rectangulo con base " << base << " y altura " << altura << " es igual a: " << resultado << endl;

  return 0;
}