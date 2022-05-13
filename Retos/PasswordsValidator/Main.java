import java.io.*;
import java.io.IOException;

/**
 * Implementación de Password validator , validador de contraseñas a partir de las cadenas qie ingresemos en la terminal y nos arroja
 * el resultado inmediatamente y despues espera mas cadenas y asi sucesiavemte hasta que detengamos la terminal.
 * @author Liahut Ley Celic Aislinn.
 * @version 08 Abril 2022.
 * @since Modelado y programación 2021-2.
 */

public class Main {

   /**
   * Método que imprime si la cadena ingresada es valida o no.
   * @param password contraseña a validar .
    */  
  public static void passwordValidator(String password) {
   
    
    if (!(password.length() >= 6 && password.length() <= 32)) {
      System.out.println("Senha invalida.");
      return;
    }

    char caracterActual = ' ';
    boolean existsUpper = false;
    boolean existsLower = false;
    boolean existsDigit = false;
    String caracteresProhibidos = "!@#$%&*()'+,-./:; <=>?[]^_`{|}";
    for (int i = 0; i < password.length(); i++) {
      caracterActual = password.charAt(i);
      if (caracteresProhibidos.contains(Character.toString(caracterActual))) {
        System.out.println("Senha invalida.");
        return;
      }

      if (Character.isUpperCase(caracterActual)) {
        if (existsUpper == true) {
          continue;
        } else {
          existsUpper = true;
        }
      }

      if (Character.isLowerCase(caracterActual)) {
        if (existsLower == true) {
          continue;
        } else {
          existsLower = true;
        }
      }

      if (Character.isDigit(caracterActual)) {
        if (existsDigit == true) {
          continue;
        } else {
          existsDigit = true;
        }
      }
    }
    if (existsUpper && existsLower && existsDigit) {
      System.out.println("Senha valida.");
    } else {
      System.out.println("Senha invalida.");
    }
  }

  public static void main(String[] args) throws IOException {


    InputStreamReader r = new InputStreamReader(System.in);
    BufferedReader bf = new BufferedReader(r);
    String bfRead = "";
    while ((bfRead = bf.readLine()) != null) {
      passwordValidator(bfRead);
    }
  }
}
