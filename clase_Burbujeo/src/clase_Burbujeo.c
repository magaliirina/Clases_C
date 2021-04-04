/*
 ============================================================================
 Name        : clase_Burbujeo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define CANTIDAD_EMPLEADOS 9
int utn_ordenarArrayDecendente(int* arrayDesordenado,int limite);

int main(void) {
	int respuesta;
	int arrayEmpleados[CANTIDAD_EMPLEADOS]={54,26,93,17,77,31,44,55,27};
	respuesta=utn_ordenarArrayAcendente(arrayEmpleados, CANTIDAD_EMPLEADOS);
	utn_imprimirArray(arrayEmpleados, CANTIDAD_EMPLEADOS);
	printf("%d",respuesta);

	return EXIT_SUCCESS;
}

int utn_ordenarArrayDecendente(int* arrayDesordenado,int limite){
	int retorno;
	int contadorIteraciones=0;
	int flagArray;
	int buffer;
	int nuevoLimite;

	if(arrayDesordenado!=NULL&&limite>=0){
		nuevoLimite=limite-1;
		do{
		flagArray=0;
		contadorIteraciones++;
		for(int i=0;i<nuevoLimite;i++){
			if(arrayDesordenado[i] < arrayDesordenado[i+1]){
				buffer=arrayDesordenado[i];
				arrayDesordenado[i]=arrayDesordenado[i+1];
				arrayDesordenado[i+1]=buffer;
				flagArray=1;
			}
		}
		nuevoLimite--;
		}while(flagArray);
	}
	retorno=contadorIteraciones;
	return retorno;
}

