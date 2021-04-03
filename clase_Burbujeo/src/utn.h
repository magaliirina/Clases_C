/*
 * utn.h
 *
 *  Created on: 25 mar. 2021
 *      Author: irina
 */

#ifndef UTN_H_
#define UTN_H_

int utn_getNumero(int* pNumeroInt,char* mensaje,char* mensajeError , int minimo, int maximo,int reintentos);
int utn_getNumeroFloat(float* pNumeroFloat,char* mensaje,char* mensajeError , int minimo, int maximo,int reintentos);
int utn_getChar(char* pChar, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int utn_maximo (int* array, int limite, int* resultado);
int utn_minimo (int* array, int limite, int* resultado);
void utn_imprimirArray (int* arrayInt,int limite);
int utn_promedio(int* arrayAcumulador, int cantidad, float* promedioFinal);
#endif /* UTN_H_ */
