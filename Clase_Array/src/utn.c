/*
 * utn.c
 *
 *  Created on: 25 mar. 2021
 *      Author: irina
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int _getNumero(int* pNumeroInt,char* mensaje,char* mensajeError , int minimo, int maximo,int reintentos){
	int retorno=-1;
	//int auxiliar;

	do{
	printf("%s", mensaje);
	//scanf("%d", pNumeroInt);
	//Valor escrito en la direccion de variable de numeroInt(pisa el valor de numero)
	//*pNumeroInt=auxiliar;
	__fpurge(stdin);
	if(scanf("%d", pNumeroInt)==1){
		if(*pNumeroInt>=minimo && *pNumeroInt<=maximo){
			retorno=0;
			break;
		}
		else{
			printf("%s", mensajeError);
		}
	}
	else{
		printf("%s", mensajeError);
	}
	reintentos--;
	}while(reintentos>0);

	return retorno;
}

int _getChar(char* pChar, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos){
	int retorno=-1;
	do{
		printf("%s", mensaje);
		__fpurge(stdin);
		if(scanf("%c", pChar)==1){
			if(*pChar>=minimo&&*pChar<=maximo){
				retorno=0;
				break;
			}
			else{
				printf("%s",mensajeError);
			}
		}
		else{
			printf("%s",mensajeError);
		}
		reintentos--;
	}while(reintentos>0);

	return retorno;
}

/*int _getNumeroFloat(float* pNumeroFloat,char* mensaje,char* mensajeError , int minimo, int maximo,int reintentos){
	int retorno=-1;

	do{
	printf("%s", mensaje);
	__fpurge(stdin);
	if(scanf("%f", pNumeroFloat)==1){
		if(*pNumeroFloat>=minimo && *pNumeroFloat<=maximo){
			retorno=0;
			break;
		}
		else{
			printf("%s", mensajeError);
		}
	}
	else{
		printf("%s", mensajeError);
	}
	reintentos--;
	}while(reintentos>0);

	return retorno;
}*/
int _getNumeroFloat(float* pNumeroFloat,char* mensaje,char* mensajeError , int minimo, int maximo,int reintentos){

	int retorno=-1;
	float bufferFloat;

	if(pNumeroFloat!=NULL&&mensaje!=NULL&&mensajeError!=NULL&&minimo<=maximo&&reintentos>=0){
		do{
		printf("%s", mensaje);
		__fpurge(stdin);
		scanf("%f", &bufferFloat);
		if(bufferFloat>=minimo&&bufferFloat<=maximo)
		{
			retorno=0;
			*pNumeroFloat=bufferFloat;
			break;
		}
		else{
			printf("%s", mensajeError);
		}
		reintentos--;
		}while(reintentos>0);
	}
	return retorno;
}

int utn_maximo (int* array, int limite, int* resultado){
	int retorno=-1;
	int bufferMaximo;
	if (array!=NULL&&limite>0&&resultado!=NULL){
		retorno=-2;
		bufferMaximo=array[0];
		for(int i=0;limite>i;i++){
			if(/*i==0||*/array[i]>bufferMaximo){
				bufferMaximo=array[i];
				//*resultado=bufferMaximo;
				retorno=0;
			}
		}
	}
	*resultado=bufferMaximo;
	return retorno;
}

int utn_minimo (int* array, int limite, int* resultado){
	int retorno=-1;
	int bufferMinimo;
	if (array!=NULL&&limite>0&&resultado!=NULL){
		retorno=-2;
		for(int i=0;limite>i;i++){
			if(i==0||array[i]>bufferMinimo){
				bufferMinimo=array[i];
				retorno=0;
			}
		}
	}
	*resultado=bufferMinimo;
	return retorno;
}
