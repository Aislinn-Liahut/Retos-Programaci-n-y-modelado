import java.io.*;
import java.io.IOException;

/**
 * Implementación de ALiteration la cual consiste en dos o más palabras consecutivas que comienzan con la misma letra (ignorando mayúsculas y minúsculas).
 * Se le da una secuencia de palabras. Averigüe el número de aliteraciones en esta secuencia, considerando solo las aliteraciones que no se pueden extender
 * @author Liahut Ley Celic Aislinn.
 * @version 24 marzo 2022.
 * @since Modelado y programación 2021-2.
 */

public class Main {

  //variables que necesitaremos como auxiliares para resolver el reto
  static char anterior = ' ';
  static char posterior = ' ';
  static char letraRepetida = ' ';
  static int alliterationNumber = 0;
  static int numeroDeIniciales = 0;
  static char caracterInicioDePalabra = ' ';

  /**
   * Método que regresa el numero de Aliteracion de una cadena
   * @param cadena string del que obtendremos e numeor de ALiteracion.
   * @return alliterationNumber , regresa el numero de aliteracion de la cadena.
   */
  public static int Alliteration(String cadena) {
   
    cadena.trim();
    cadena = cadena.toLowerCase();
    anterior = ' ';
    posterior = ' ';
    letraRepetida = ' ';
    alliterationNumber = 0;
    numeroDeIniciales = 0;
    caracterInicioDePalabra = ' ';
    for (int i = 0; i < cadena.length() - 1; i++) {
      caracterInicioDePalabra = cadena.charAt(i + 1);
      //caso para obtener la primera letra de la primera palabra de la cadena
      if (i == 0) {
        anterior = cadena.charAt(0);
        numeroDeIniciales++;
        continue;
      }
      //caso para obtener la primera letra de las palabras exceptuandoo de la primera
      if (cadena.charAt(i) == ' ') {
        numeroDeIniciales++;
        //una de las variables que guardaran las dos consecutivas palabras
        if (numeroDeIniciales % 2 == 0) {
          posterior = caracterInicioDePalabra;
        } else {
          //una de las variables que guardaran las dos consecutivas palabras
          anterior = caracterInicioDePalabra;
        }
        //caso cuando hay mas de dos palabras consecutivas con la misma letra y no se cuente de mas y pase a la siguiente iteración
        if (anterior == letraRepetida && posterior == letraRepetida) {
          continue;
        }
        //caso para las primeras dos palabras consecutivas con la misma letra
        if (anterior == posterior) {
          letraRepetida = caracterInicioDePalabra;
          alliterationNumber++;
        }
        //para cambiar la variable que guarda las letras que han aparecido mas de una vez consecutivad en la iniciales de dos palabras contiguas
        if (letraRepetida != caracterInicioDePalabra) {
          letraRepetida = ' ';
        }
      }
    }
    return alliterationNumber;
  }

  public static void main(String[] args) throws IOException {
    //ingresarmos la cadena de la que queremos obtener la aliteración



    InputStreamReader r = new InputStreamReader(System.in);
    BufferedReader bf = new BufferedReader(r);
    String bfRead = "";
    //System.out.println("Ingresa las cadenas para obtener la Aliteración :) :");
    while ((bfRead = bf.readLine()) != null) {
       
      System.out.println(Alliteration(bfRead));
    }
  }
}
