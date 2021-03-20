/*
 ============================================================================
 Name        : tarea2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numero;
	int contadorPositivo=0;
	int contadorNegativo=0;
	for(int i=0;i<10;i++)
	{
		printf("Ingrese un numero\n");
		scanf("%d",&numero);
		if(numero>=0){
			contadorPositivo++;
		}
		else{
			contadorNegativo++;
		}
	}
	printf("\nIngresaste %d positivos",contadorPositivo);
	printf("\nIngrsaste %d negativos",contadorNegativo);

	return EXIT_SUCCESS;
}
