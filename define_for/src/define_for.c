/*
 ============================================================================
 Name        : for.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 3

int main(void) {
	setbuf(stdout,NULL);
	int numero;
	int acumuladorNumeros=0;
	float promedio;

	for(int i=0;i<N;i++){
		printf("Ingrese un numero:");
		scanf("%d",&numero);
		acumuladorNumeros+=numero;
	}

	promedio=((float)acumuladorNumeros)/N;
	printf("El promedio es: %f",promedio);


	return EXIT_SUCCESS;
}
