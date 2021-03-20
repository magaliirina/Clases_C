/*
 ============================================================================
 Name        : funcion_suma.c
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
	int a;
	int b;
	int resultado;
	printf("Ingrese dos numeros:");
	scanf("%d",&a);
	scanf("%d",&b);
	resultado=suma(a,b);//invoco la funcion
	printf("La suma es: %d",resultado);


	return EXIT_SUCCESS;
}

int suma(int a, int b){
	int total;//declaro
	total=a+b;
	return total;//lo que me devuelve la funcion

}
