/*
 * utn.c
 *
 *  Created on: 23 mar. 2021
 *      Author: Irina Narciso
 */


#include <stdio.h>
#include <stdlib.h>

int ingresoChar(void){
	char caracter;
	int retorno;
	printf("Ingrese un caracter S/N");
	fflush(stdin);
	scanf("%c",&caracter);
	if(caracter=='s'){
		retorno=1;
	}
	else if(caracter=='n'){
		retorno=0;
	}
	else{
		retorno=3;
	}
	return retorno;
}
