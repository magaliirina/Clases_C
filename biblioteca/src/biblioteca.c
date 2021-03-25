/*
 ============================================================================
Escribir un programa que por medio de una funcion calcule la superficie de un rectangulo. El
programa continúa calculando superficies hasta que se ingresen ambos lados con valor cero.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {
	setbuf(stdout,NULL);
	float ladoA;
	float ladoB;
	float superficie;
	int retorno;
	do{
		printf("Ingrese dos numeros:");
		scanf("%f",&ladoA);
		scanf("%f",&ladoB);
		retorno= calculo_Superficie(ladoA, ladoB, &superficie);
		printf("El area es %f",superficie);
	}while(retorno==1);
	return EXIT_SUCCESS;
}

