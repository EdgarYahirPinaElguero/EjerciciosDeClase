package Clase1;
import java.util.*;

public class Secuencial2 {
	public static void main(String[] args) {
		
		double numero1; 
		double numero2;
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Intoroduzca el primer nunmero");
		numero1 = sc.nextDouble();
		System.out.println("Intoroduzca el segundo nunmero");
		numero2 = sc.nextDouble();
		
		double suma=numero1+numero2;
		double resta=numero1-numero2;
		double multi=numero1*numero2;
		
		System.out.println("La suma es: "+suma);
		System.out.println("La resta es: "+resta);
		System.out.println("La multiplicacion es: "+multi);
		
	}
}
