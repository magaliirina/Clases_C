/*
 ============================================================================
 Name        : funcionEjercicio1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int suma(int a,int b);//prototipo

int main(void) {
	setbuf(stdout,NULL);
	int numero1;
	int numero2;
	int print_resultado;
	printf("Ingrese dos numero:");
	scanf("%d",&numero1);
	scanf("%d",&numero2);
	//capturo el return
	print_resultado= suma(numero1,numero2);//invoco la funcion(arg1,argum2);
	printf("La suma es: %d",print_resultado);
	return EXIT_SUCCESS;
}

int suma(int a,int b){// int es del mismo tipo que return
	int resultado;
	resultado=a+b;
	if(resultado>100){
		resultado=100;
	}
	return resultado;
}
