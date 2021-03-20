/*
 ============================================================================
 Name        : funciones.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

	void imprimoMensaje (void){
		printf("Hola mundo");
	}
	int main(void) {
		setbuf(stdout,NULL);
		int numero;
		printf("Ingrese un numero:");
		scanf("%d",&numero);
		imprimoMensaje();
		printf("%d",numero);
		return 0;
	}
