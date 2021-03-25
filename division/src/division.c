/*
 ============================================================================
 Name        : division.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int division(int numero1,int numero2, float* resultado);

int main(void) {
	setbuf(stdout,NULL);
	int a;
	int b;
	float resultado;

	printf("Ingrese dos numeros");
	scanf("%d",&a);
	scanf("%d",&b);
	division(a,b,&resultado);
	if(division(a,b,&resultado)==0){
		printf("La division es: %f",resultado);
	}
	else{
		printf("No se puede dividir");
	}

	return EXIT_SUCCESS;
}

int division(int numero1,int numero2, float* pResultado){
	int retorno=-1;
	if(numero2!=0){
		*pResultado=(float)numero1/numero2;
		retorno=0;
	}
	return retorno;
}
