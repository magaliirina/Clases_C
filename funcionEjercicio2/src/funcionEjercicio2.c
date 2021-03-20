/*
 ============================================================================
 Name        : funcionEjercicio2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int suma(int numero1,int numero2);
int resta(int numero1,int numero2);
int multiplicacion(int numero1,int numero2);
float division(int numero1,int numero2);

int main(void)
{
	setbuf(stdout,NULL);
	int a;
	int b;
	char operacion;
	int resultado;
	float resultadoFloat;
	printf("Ingrese un numero:");
	scanf("%d",&a);
	//agregar para borrar los buffer (?)
	fflush(stdin);
	printf("Ingrese la operacion a realizar: resta(r),division(d),multiplicacion(m),suma(s)");
	scanf("%c",&operacion);
	printf("Ingrese otro numero");
	scanf("%d",&b);
	while(operacion=='d'&&b==0){
		printf("El dividendo no puede ser 0. Ingrese otro numero:");
		scanf("%d",&b);
	}
	if(operacion=='r'){
		resultado=resta(a,b);
	}
	else if(operacion=='s'){
		resultado=suma(a,b);
	}
	else if(operacion=='m'){
		resultado=multiplicacion(a,b);
	}
	else{
		resultadoFloat=division(a,b);
		printf("El resultado es: %f",resultadoFloat);
	}
	if(operacion!='d'){
	printf("El resultado es: %d",resultado);
	}
	return EXIT_SUCCESS;
}

int suma(int numero1,int numero2){
	int total;
	total=numero1+numero2;
	return total;
}
int resta(int numero1,int numero2){
	int total;
	total=numero1-numero2;
	return total;
}
int multiplicacion(int numero1,int numero2){
	int total;
	total=numero1*numero2;
	return total;
}
float division(int numero1,int numero2){
	float total;
	total=(float)numero1/numero2;
	return total;
}


