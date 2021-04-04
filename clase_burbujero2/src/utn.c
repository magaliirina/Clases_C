/*
 * utn.c
 *
 *  Created on: 4 abr. 2021
 *      Author: irina
 */

#include <stdio.h>
#include <stdlib.h>

int ingresoNumeros(int* arrayInt,int limite, char* mensaje){
	int retorno =-1;
	int bufferInt;

	if(arrayInt!=NULL&&limite>=0&&mensaje!=NULL){
		retorno=-2;
		for(int i=0;i<limite;i++)
		{
				printf("%s %d ",mensaje,i+1);
				scanf("%d",&bufferInt);
				arrayInt[i]=bufferInt;
				retorno=0;
		}
	}

	return retorno;
}
int ordenarArray(int* arrayDesordenado, int limite){
	int retorno=-1;
	int flagArray;
	int nuevoLimite;
	int bufferArray;

	if(arrayDesordenado!=NULL&&limite>=0){
		do{
			flagArray=0;
			nuevoLimite=limite-1;
			for(int i=0; i<nuevoLimite;i++){
				if(arrayDesordenado[i]>arrayDesordenado[i+1]){
					bufferArray=arrayDesordenado[i];
					arrayDesordenado[i]=arrayDesordenado[i+1];
					arrayDesordenado[i+1]=bufferArray;
					flagArray=1;
				}
			}
			nuevoLimite--;
			}while(flagArray);
	}
	return retorno;
}

void minimoArrayOrdenado(int* array){
	if(array!=NULL){
		printf("Minimo %d", array[0]);
	}
}
void maximoArrayOrdenado(int* array, int limite){
	if(array!=NULL){
		printf("Maximo %d", array[limite-1]);
	}
}
void cambioIndiceValor(int* array, char* mensaje){
	int bufferIndice;
	int bufferValor;
	if(array!=NULL&&mensaje!=NULL){
		printf("%s",mensaje);
		__fpurge(stdin);
		scanf("%d", &bufferIndice);
		scanf("%d", &bufferValor);
		array[bufferIndice]=bufferValor;
		printf("Nuevo valor ingresado %d\n",array[bufferIndice]);
	}
}


