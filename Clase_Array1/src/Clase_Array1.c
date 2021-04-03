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

	for(int i=0;i<edadesSizes;i++){
		if(utn_getNumero(&numero, "ingrese una edad", "error", 0, 190, 2)==0){
			edadesArray[i]=numero;
		}
		else{
			printf("Intentelo de nuevo mas tarde");
		}
	}
	utn_imprimirArray(edadesArray, edadesSizes);

	return EXIT_SUCCESS;
}

int utn_promedio(int* arrayAcumulador, int cantidad, int* promedioFinal){
	int retorno;
	retorno=-1;
	int acumuladorPromedio;
	if(arrayAcumulador!=NULL&&promedioFinal!=NULL&&cantidad>0){
		for(int i=0;i<cantidad;i++){
			acumuladorPromedio+=arrayAcumulador[i];
		}
		promedioFinal=acumuladorPromedio/cantidad;
		retorno=0;
	}
	return retorno;
}







