using namespace std;
#include <string>
#include <stack>
#include <iostream>


/**
*Modulo encargado de verificar si una expresión esta balanceada
 * \author Celic Aislinn Liahut Ley
 */
string isBalanced(string exp){

    //creamos una pila de chars
    stack<char> pila;

   //se recorre caracter por caracter de la expresion
    for(int i=0;i< exp.length();i++){

         //si el caracter actual es diferente de algun parentesis simplemente lo ignora y no entra en nunguno caso y sigue ala sig ietración
        char actual = exp[i]; 
        //caso para los parentesis que abren
        if(actual == '('){
            pila.push(actual);
            //caso en parentesis que cierran
        }else if(actual==')'){
            if(pila.empty()){
                return "incorrect";
            }
            pila.pop();
        }

    }
    //al terminar verfica si la pila esta vacia, si lo esta es correcta , en otro caso no
    if(pila.empty()){
        return "correct";
        
    }else{
        return "incorrect";
    }
}

int main(){

    //input y output de datos
    string cadena=" ";
    while(getline(cin,cadena)){
    cout << isBalanced(cadena) << endl;
    }
    return 0;
}