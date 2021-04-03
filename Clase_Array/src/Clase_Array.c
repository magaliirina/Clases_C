/*
 ============================================================================
 Name        : Clase_Array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define CANTIDAD_EDADES 5
int main(void) {

	int arrayEdades[CANTIDAD_EDADES];
	int resultado;
	for(int i=0; i<CANTIDAD_EDADES; i++){
		_getNumero(&arrayEdades[i], "Edad?", "", 0, 150, 2);
	}
	utn_maximo(arrayEdades, 5, &resultado);
	printf("%d",resultado);

	return EXIT_SUCCESS;
}
