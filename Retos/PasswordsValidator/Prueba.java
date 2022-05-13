import java.util.Scanner;

public class Prueba {
	public static void main(String [] args) {
	
		Scanner lectura = new Scanner(System.in);
		
		String contrasenas = lectura.nextLine();
		boolean validador;
		
		if(6 <= contrasenas.length() && contrasenas.length() <= 32) {
			
			boolean letra_mayuscula = false;
			boolean letra_minuscula = false;
			boolean caracter_numerico = false;
			boolean caracter_especial = false;
			
			for(int i = 0; i < contrasenas.length(); i++) {
				
				char caracteres = contrasenas.charAt(i);
				
				if(Character.isUpperCase(caracteres)) {
					letra_mayuscula = true;
				}
				
				if(Character.isLowerCase(caracteres)) {
					letra_minuscula = true;
				}
				
				if(Character.isDigit(caracteres)) {
					caracter_numerico = true;
				}
				
				String caracteres_especiales = "!@#$%&*()'+,-./:;<=>?[]^_`{|}";
				String strChar = Character.toString(caracteres);
				
				if(Character.isWhitespace(caracteres) || caracteres_especiales.contains(strChar)) {
					caracter_especial = true;
				}
			}
			
			if(letra_mayuscula && letra_minuscula && caracter_numerico && !caracter_especial) {
				validador = true;
			}
			else {
				validador = false;
			}
			
		}
		else {
			validador = false;
		}

		if(validador) { 
			System.out.println("Senha valida.");
		}
		else {
			System.out.println("Senha invalida.");
		}
	}
}