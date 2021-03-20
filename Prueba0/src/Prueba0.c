/*
 ============================================================================
 Name        : Prueba0.c
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
	int numeroUno;
	int numeroDos;
	int suma;
	printf("Ingrese un numero\n");
	scanf("%d",&numeroUno);
	printf("Ingrese otro numero\n");
	scanf("%d",&numeroDos);
	suma=numeroUno+numeroDos;
	printf("La suma es: %d",suma);



	return EXIT_SUCCESS;
}
