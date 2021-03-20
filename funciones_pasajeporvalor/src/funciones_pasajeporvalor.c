/*
 ============================================================================
 Name        : funciones_pasajeporvalor.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void muestra(int x,int y);

int main(void) {
	setbuf(stdout,NULL);
	int x,y;

	printf("Ingrese un numero");
	scanf("%d",&x);
	printf("Ingrese un numero");
	scanf("%d",&y);
	muestra(x,y);
	printf("\nxvale %d \nyvale %d",x,y);
	setbuf(stdout,NULL);
	return EXIT_SUCCESS;
}

void muestra(int a,int b){
	a=b;
	printf("\nx vale %d \ny vale %d",a,b);
}
