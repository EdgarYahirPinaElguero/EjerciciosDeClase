#package Clase2;
import java.util.Scanner;

public class Dia2 {
	public static void main(String [] args) {
		Scanner entrada = new Scanner(System.in);
		System.out.println("ingrese el dia que quiera");
		String dia = entrada.nextLine();
			
		if(dia.equals("Lunes")) { //Solo_pon_el_dia_que_quieras_y_saldra_el_mensaje_deseado.
				System.out.println("Lunes-El dia que a nadie le gusta.:((");
			}
			else if(dia.equals("Martes")) {
				System.out.println("Martes-Un dia muy aburrido y algo pesado");
			}
			else if(dia.equals("Viernes")) {
				System.out.println("Viernes-Gracias a dios ya es viernes.:))");
			}
			else if(dia.equals("Domingo")) {
				System.out.println("Domingo-Dia de descanso.;))");
			}
			else{
				System.out.println("Tus dias no coincden");//Saldra_si_esta_mal_escrito_o_si_este_no_esta(recuerda_que_debes_respetas_mayusculas_minusculas)
			}
			
		}

	}
