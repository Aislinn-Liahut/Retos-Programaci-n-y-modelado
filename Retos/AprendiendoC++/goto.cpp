// Este programa calcula el promedio de números ingresados ​​por el usuario.
// Si el usuario ingresa un número negativo, ignora el número y
// calcula el número promedio ingresado antes que él.

# include <iostream>
using namespace std;

int main()
{
    float num, promedio, suma = 0.0;
    int i, n;

    cout << "Número máximo de entradas: ";
    cin >> n;

    for(i = 1; i <= n; ++i)
    {
        cout << "Ingresa n" << i << ": ";
        cin >> num;

        if(num < 0.0)
        {
           // Control del flujo del programa para jump:
            goto jump;
        }
        suma += num;
    }

jump:
    promedio = suma / (i - 1);
    cout << "\npromedio = " << promedio;
    return 0;
}