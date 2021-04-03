/*
 * utn.c
 *
 *  Created on: 25 mar. 2021
 *      Author: irina
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

/**
 * \brief Obtiene un numero y lo compara en un rango. Tiene reintentos y mensaje de Error
 * \param pNumeroInt  puntero del numero que se encuentras en rango
 * \param mensaje puntero del mesaje que pide los numeros
 * \param mensajeError puntero del mensaje de error
 * \param minimo rango inferior
 * \param maximo rango superior
 * \param reintentos cantidad de reintetos
 * \return retorna: -2 si se ingreso algo distinto a numero, 0 si esta en rango
 *
 */

int utn_getNumero(int* pNumeroInt,char* mensaje,char* mensajeError , int minimo, int maximo,int reintentos){
	int retorno=-1;
	int bufferInt;
	do{
	printf("%s", mensaje);
	__fpurge(stdin);
	if(scanf("%d", &bufferInt)!=1){
		__fpurge(stdin);
		printf("%s", mensajeError);
		retorno=-2;
	}
	else if(pNumeroInt!=NULL&&mensaje!=NULL&&mensajeError!=NULL&&minimo<maximo&&reintentos>=0){
		if(bufferInt>=minimo && bufferInt<=maximo){
			retorno=0;
			*pNumeroInt=bufferInt;
			break;
		}
		else{
			printf("%s", mensajeError);
		}
	}
	reintentos--;
	}while(reintentos>0);

	return retorno;
}
/**
 * \brief Obtiene un caracter y los compara en un rango. Tiene reintentos y mensaje de Error
 * \param pChar  puntero del caracter que se encuentras en rango
 * \param mensaje puntero del mesaje que pide el caracter
 * \param mensajeError puntero del mensaje de error
 * \param minimo rango inferior
 * \param maximo rango superior
 * \param reintentos cantidad de reintetos
 * \return retorna: -2 si se ingreso algo distinto a un caracter, 0 si esta en rango
 *
 */


int utn_getChar(char* pChar, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos){
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

/**
 * \brief Obtiene un numer con coma y lo compara en un rango. Tiene reintentos y mensaje de Error
 * \param pNumeroFloat  puntero del numero que se encuentras en rango
 * \param mensaje puntero del mesaje que pide los numeros
 * \param mensajeError puntero del mensaje de error
 * \param minimo rango inferior
 * \param maximo rango superior
 * \param reintentos cantidad de reintetos
 * \return retorna: -2 si se ingreso algo distinto a numero, 0 si esta en rango
 *
 */

int utn_getNumeroFloat(float* pNumeroFloat,char* mensaje,char* mensajeError , int minimo, int maximo,int reintentos){

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
/**
 * \brief Obtiene un array con numeros enteros y obtiene el maximo
 * \param array puntero del vector con numeros enteros
 * \param limite cantidad de elementos
 * \param resultado puntero del numero maximo
 * \return retorna: -1 si hubo un error al ingresar un numero, 0 si obtuvo un maximo
 *
 */

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
/**
 * \brief Obtiene un array con numeros enteros y obtiene el minimo
 * \param array puntero del vector con numeros enteros
 * \param limite cantidad de elementos
 * \param resultado puntero del numero minimo
 * \return retorna: -1 si hubo un error al ingresar un numero, 0 si obtuvo un minimo
 *
 */
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
/**
 * \brief Obtiene un array con numeros enteros y imprime los numeros
 * \param arrayInt puntero del vector con numeros enteros
 * \param limite cantidad de elementos
 * \return vacio
 *
 */
void utn_imprimirArray (int* arrayInt,int limite){
	for(int i=0;i<limite;i++){
		printf("%d ", arrayInt[i]);
		}
}
/**
 * \brief Obtiene un array con numeros enteros y obtiene el promedio
 * \param arrayAcumulador puntero del vector con numeros enteros
 * \param limite cantidad de elementos
 * \param promedioFinal puntero del promedio de los numeros
 * \return retorna: -1 si hubo un error al ingresar un numero, 0 si obtuvo un promedio
 *
 */
int utn_promedio(int* arrayAcumulador, int limite, float* promedioFinal){
	int retorno;
	retorno=-1;
	int acumuladorPromedio=0;
	if(arrayAcumulador!=NULL&&promedioFinal!=NULL&&limite>0){
		for(int i=0;i<limite;i++){
			acumuladorPromedio+=arrayAcumulador[i];
		}
		*promedioFinal=(float)acumuladorPromedio/limite;
		retorno=0;
	}
	return retorno;
}

