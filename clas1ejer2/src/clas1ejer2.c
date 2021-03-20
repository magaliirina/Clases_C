/*
 ============================================================================
 Name        : clas1ejer2.c
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
	int promedio=0;

	for(int i=0; i<5; i++){
		printf("Ingrese un numero: ");
		scanf("%d",&numero);
		promedio+=numero;
	}
	promedio=promedio/5;
	printf("El promedio es %d",promedio);





	return EXIT_SUCCESS;
}
