/*
 ============================================================================
 Name        : ejercicioclase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "utn.h"

int main(void) {
	int numero;
	float numeroF;
	char letra;
	if (_getNumero(&numero,"Ingrese un numero\n","Error. Fuera de rango\n",0,99,3)==0){
		printf("Ingresaste %d\n", numero);
	}
	if(_getNumeroFloat(&numeroF, "Ingrese un numero con coma\n", "Error\n", 0, 122, 3)==0){
		printf("Ingresaste %f\n", numeroF);
	}
	if(_getChar(&letra, "Ingrese una letra\n", "Error\n", 'A', 'B', 3)==0){
		printf("Ingresaste %c\n", letra);
	}

	return EXIT_SUCCESS;
}


/*

int getNumero(int *pNum,char*pTexto,char*pError,

		int minimo,

		int maximo,int reintento)

{

	int retorno=-1;

​

	do{

		printf("%s",pTexto);

​

		//fflush(stdin); // windorrrrrrrrr

		__fpurge(stdin); // linux #include <stdio_ext.h>

		if(scanf("%d",pNum)==1)//por parametro el scanf devuelve 1 cuando convierte a numero y 0 cuando no pudo convertirlo

		{

			if((*pNum)>=minimo && (*pNum)<=maximo)

			{

				retorno=0;

​

				break; // opcion 1

				//reintento=-1; // opcion2

			}

			else

			{

				printf("%s",pError);

				reintento--;

			}

		}

		else

		{

			printf("%s",pError);

			reintento--;

		}

	}

	while(reintento>0);

​

​

	return retorno;

}

*/
