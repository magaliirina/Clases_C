/*
 ============================================================================
* Objetivo:
*   -Crear una funcion que permita ingresar un numero al usuario y lo retorne.
*   -Crear una funcion que reciba el radio de un círculo y retorne su area
*   -Utilizar las funciones de los puntos 1 y 2 para hacer un programa que calcule
*    el área de un circulo cuyo radio es ingresado por el usuario
*   -Documentar las funciones al estilo Doxygen
*
* Aspectos a destacar:
*   -Declaración de funciones que devuelven y reciben valores
*   -Hacer notar que el uso de funciones evita el código repetido y ayuda a que
*    el mismo sea mas legible
*   -La funcion deberiia comenzar indicando el objetivo que persigue y el
*    significado de sus parametros.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float numeroUsuario(void);
float calculoRadio(float r);
int main(void) {
	setbuf(stdout,NULL);
	float radioIngresado;
	float areaPrint;

	radioIngresado=numeroUsuario();
	areaPrint=calculoRadio(radioIngresado);
	printf("El area es: %f",areaPrint);

	return EXIT_SUCCESS;
}

float numeroUsuario(void){
	float numero;
	printf("Ingrese el radio:");
	scanf("%f",&numero);
	return numero;
}
float calculoRadio(float r){
	float area;
	area=3.14*r*r;
	return area;
}
