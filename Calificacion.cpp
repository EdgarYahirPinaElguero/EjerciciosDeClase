package Clase2;
import java.util.*;

public class Calif {
	public static void main(String[] args){
		int calificacion;
		 Scanner entrada = new Scanner(System.in);
		  System.out.println("ingrese calificacion del alumno");
		    calificacion=entrada.nextInt();
		if(calificacion>=7){
		//System.out.println("tu nota es mayor:"+ calificacion);
		System.out.println("Enhorabuena, has aprobado."+calificacion);
		 	}
		else {
		//	System.out.println("tu nota es menor:");	
			System.out.println("Lo siento has reprobado");
		}
   }
}
