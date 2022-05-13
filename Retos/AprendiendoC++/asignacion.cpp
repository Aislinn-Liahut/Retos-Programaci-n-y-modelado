#include <iostream>
using namespace std;

int main() {
    int a, b;

    a = 4;

    b = 6;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "Despues de aplicar a += b;" << endl;

    a -= b;  // a = a+b
    cout << "a = " << a << endl;

    return 0;
}