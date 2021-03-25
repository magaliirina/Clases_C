/*
 * utn.c
 *
 * 1) Desarrollar una biblioteca "utn.h" que posea funciones para pedirle al usuario el ingreso de datos

		getInt()
		getFloat()
		getChar()
 */
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

 int _getInt (void){
	 int numeroInt;
	 printf("Ingrese un numero");
	 scanf("%d",&numeroInt);
	 return numeroInt;
 }
float _getFloat(void){
	float numeroFloat;
	printf("Ingrese un numero");
	 scanf("%f",&numeroFloat);
	return numeroFloat;
}
char _getChar(void){
	char letra;
	printf("Ingrese una letra");
	__fpurge(stdin);
	scanf("%c",&letra);
	return letra;
}
