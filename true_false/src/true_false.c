/*
 ============================================================================
 Name        : true_false.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int variableUno;
	int variableDos;
	int resultado;
	variableUno=5;
	variableDos=3;
	//Si la comparacion es una true da 1 si es false da 0
	resultado=variableUno<variableDos;
	printf("Resultado de la comparacion: %d",resultado);


	return EXIT_SUCCESS;
}
