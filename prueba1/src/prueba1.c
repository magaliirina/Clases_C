/*
 ============================================================================
 Name        : prueba1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

	int main(void) {
		int numero;
		//para windows
		setbuf(stdout,NULL);

		printf("Ingrese el numero:");
		scanf("%d",&numero);
		printf("Ingresaste: %d", numero);


		return EXIT_SUCCESS;
	}
