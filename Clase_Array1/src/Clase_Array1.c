/*
 ============================================================================
 Name        : Clase_Array1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define edadesSizes 5

int main(void) {
	int numero;
	int edadesArray[edadesSizes];
	float promedio;

	for(int i=0;i<edadesSizes;i++){
		if(utn_getNumero(&numero, "ingrese una edad", "error", 0, 190, 2)==0){
			edadesArray[i]=numero;
		}
		else{
			printf("Intentelo de nuevo mas tarde");
		}
	}
	utn_imprimirArray(edadesArray, edadesSizes);
	utn_promedio(edadesArray, edadesSizes, &promedio);
	printf("El promedio es %.2f",promedio);


	return EXIT_SUCCESS;
}








