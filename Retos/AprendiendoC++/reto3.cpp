#include <iostream>
#include <cstring>
using namespace std;

void sort(string s[], int n)
{
    for (int i=1 ;i<n; i++)
    {
        string temp = s[i];
 
        // Insert s[j] at its correct position
        int j = i - 1;
        while (j >= 0 && temp.length() > s[j].length())
        {
            s[j+1] = s[j];
            j--;
        }
        s[j+1] = temp;
    }
}

string ordenarPalabras(string cadena){
    // cout << "Bienvenidos a c++";
    int contador=0;
    string resultado;
    for (int i = 0; i < cadena.length(); i++) {
        // cout << "Hola" << endl;
        if(cadena[i] == ' '){
            contador++;
        }


    }

    if(contador >= 1){
        contador++;
    }
    // cout << contador << endl;

    string Palabras[contador];
    //int Palabras[contador];
    int contador2=0;

    for (int i = 0; i < cadena.length(); i++) {
        // cout << "Hola" << endl;
        if(cadena[i] != ' '){
            Palabras[contador2]+= cadena[i];
        }else{
            contador2++;
        }

        

    }

    sort(Palabras,contador);


  // for(int i=contador-1; i>=0; i--){
       for(int i=0; i<contador; i++){   
         if(i==contador-1){
            resultado +=  Palabras[i];
            break;
        }
        resultado += Palabras[i] + " ";
    }
    
    return resultado;
   
}

void imprimir_Array(int Arr[],int log){
  for(int i=0; i< log; i++){
        cout << Arr[i] << "  ";
    }
}   

 



int main()
{
    // variable donde se almacenaran las lineas
    string resultado;
    //numero de lineas a leer
    int numero_lineas;
    //variable que recibira la linea actual
    string cadena="";
    cin >> numero_lineas;
    for(int i=0;i<numero_lineas;i++){
      cin >> cadena;
      //getline(cin,linea);

      //resultado +=  ordenarPalabras(linea) + "\n";
       //cout << ordenarPalabras(cadena);
 
       cadena="";
        
    }
    
    cout << ordenarPalabras("Top Coder comp Wedn at midnight");
    cout << ordenarPalabras("sj a sa df r e w f d s a v c x z sd fd");
    return 0;
}

 /*  int numeros[]={2,3,7,1,4,10};
    Quick_Sort(numeros,0,5);
    imprimir_Array(numeros,6);
    cout << "ultimo" << numeros[5] <<"   "; */