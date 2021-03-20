/*
 ============================================================================
 Name        : maximo_minimo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int maximoNumero;
	int minimoNumero;
	int bufferInt;
	int flag=0;

	for(int i=0;i<5;i++)
	{
		printf("Ingrese un numero:");
		scanf("%d",&bufferInt);
		if(flag==0)
		{
			maximoNumero=bufferInt;
			minimoNumero=bufferInt;
			flag=1;
		}
		else
		{
			if(maximoNumero<bufferInt){
			maximoNumero=bufferInt;
			}
			if(minimoNumero>bufferInt){
			minimoNumero=bufferInt;
			}
		}
	}
	printf("El numero maximo es %d y el numero minimo es %d",maximoNumero,minimoNumero);



	return EXIT_SUCCESS;
}
