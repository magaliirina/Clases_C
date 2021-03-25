/*
 ============================================================================
 Name        : clase2ejercicio1.c
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
	int bufferInt;
	int max_Numero;
	int min_Numero;
	int flag=0;

	do{
		printf("Ingresar un numero:");
		scanf("%d",&bufferInt);
		if (flag==0){
			max_Numero=bufferInt;
			min_Numero=bufferInt;
			flag=1;
		}
		else{
			if(max_Numero<bufferInt&&bufferInt!=888){
				max_Numero=bufferInt;
			}
			if(min_Numero>bufferInt&&bufferInt!=888){
				min_Numero=bufferInt;
			}
		}
	}while(bufferInt!=888);

	printf("El numero maximo es: %d",max_Numero);
	printf("\nEl numero minimo es: %d",min_Numero);

	return EXIT_SUCCESS;
}
