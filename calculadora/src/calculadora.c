/*
 ============================================================================
 Name        : calculadora.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int division(int operador1,int operador2, float* pResultado);
int multiplicacion(int operador1, int operador2, int*pResultado);
int resta(int operador1, int operador2, int*pResultado);
int suma(int operador1,int operador2,int* pResultado);

int main(void) {
	setbuf(stdout,NULL);
	int numero1;
	int numero2;
	char operacion;
	int resultadoInt;
	float resultadoFloat;



	printf("\nIngrese un numero: ");
	scanf("%d",&numero1);
	printf("\nIngrese la operacion: s[suma] m[multiplicacion] d[division] r[resta]");
	fflush(stdin);
	scanf("%c",&operacion);
	printf("\nIngrese otro numero: ");
	scanf("%d",&numero2);

	if(operacion=='s'||operacion=='r'||operacion=='d'||operacion=='m'){
		switch(operacion){
			case 's':
				suma(numero1,numero2,&resultadoInt);
				break;
			case 'r':
				resta(numero1,numero2,&resultadoInt);
				break;
			case 'm':
				multiplicacion(numero1,numero2,&resultadoInt);
				break;
			case 'd':
				division(numero1,numero2,&resultadoFloat);
				break;
		}
		if(operacion!='d'){
		printf("\nEl resultado es: %d", resultadoInt);
		}
		else{
			if(division(numero1,numero2,&resultadoFloat)==-1){
				printf("\nNo se puede dividir");
			}
			else{
				printf("\nEl resultado es: %f", resultadoFloat);
			}
		}
	}
	else{
		printf("\nSe produjo un error");
	}


	return EXIT_SUCCESS;
}

int suma(int operador1,int operador2,int* pResultado){
	*pResultado=operador1+operador2;
	return 0;
}
int resta(int operador1, int operador2, int*pResultado){
	*pResultado=operador1-operador2;
	return 0;
}
int multiplicacion(int operador1, int operador2, int* pResultado){
	*pResultado=operador1*operador2;
	return 0;
}
int division(int operador1,int operador2, float* pResultado){
	int retorno=-1;
	if(operador2!=0){
		*pResultado=(float)operador1/operador2;
		retorno=0;
	}
	return retorno;
}
