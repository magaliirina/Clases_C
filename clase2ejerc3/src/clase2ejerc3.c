/*
 ============================================================================
Ejercicio:
Realizar un programa que solicite cinco números e imprima por pantalla el promedio, el máximo y el mínimo.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 5

int main(void) {
	setbuf(stdout,NULL);
	float promedio;
	int acumuladorNumeros=0;
	int maxNumero;
	int minNumero;
	int bufferInt;

	for(int i=0;i<CANTIDAD;i++){
		printf("Ingrese un numero:");
		scanf("%d",&bufferInt);
		acumuladorNumeros+=bufferInt;
		if(i==0){
			maxNumero=bufferInt;
			minNumero=bufferInt;
		}
		else{
			if(maxNumero<bufferInt){
				maxNumero=bufferInt;
			}
			if(minNumero>bufferInt){
				minNumero=bufferInt;
			}
		}
	}//termina for

	promedio=(float)acumuladorNumeros/CANTIDAD;
	printf("El promedio es: %.2f",promedio);
	printf("\nEl numero maximo es %d y el numero minimo es %d",maxNumero,minNumero);



	return EXIT_SUCCESS;
}
