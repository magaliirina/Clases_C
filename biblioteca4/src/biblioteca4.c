/*
 ============================================================================
Diseñar un programa para jugar a adivinar un número entre 0 y 100.
 El juego tiene que dar pistas de si el número introducido por el jugador está por encima o por debajo.
 El juego termina cuando se adivina el número o se decide terminar de jugar ingresando un número negativo.
 Permitir jugar tantas veces como lo desee el jugador y al salir mostrar su mejor puntuación.
 Utilizar la biblioteca del ejercicio #001.
 ============================================================================
 */
#define RESP 15
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {
	int numero;
	int retorno;
	char continuar='s';
	int contador=0;
	do{

		numero=_getInt("\nIngrese el un numero del 0 al 100, o un numero negativo para terminar");
	              //ERROR no va con el tipo de variable cuando se llama a la funcion!!
		retorno=pista (numero,RESP);
		if(retorno==0){
			printf("\nFin del juego");
			break;
		}
		else if(retorno==-1){
			printf("\nNo admito numeros negativos, ingresa un numero del 0 al 100");
		}
		else if(retorno==1){
			printf("\n¡Ganaste!");
			continuar=_getChar("¿Desea continuar? s/n");
		}
		else if(retorno==2){
			printf("\nTe pasaste");
		}
		else if(retorno==3){
			printf("\nTe falta");
		}
		contador++;
	}while(continuar=='s');

	printf("Puntaje %d estrellas",contador);


	return EXIT_SUCCESS;
}
