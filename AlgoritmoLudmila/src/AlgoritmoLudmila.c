/*
 ============================================================================
 Name        : AlgoritmoLudmila.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 5
//int algoritmoLudmila(int* array, int limite);
int utn_MinimoIndice (int* array, int limite, int* resultado);
int algoritmoLudmila(int* array,int menor, int limite);

int main(void) {
	int resultado;
	int edades[TAM]={21, 5, 9, 18, 15};
	//utn_MinimoIndice(edades, TAM, &resultado);


	algoritmoLudmila(edades, 0, TAM);

	for(int i=0;i<TAM;i++){
			printf("%d numero: %d\n",i+1,edades[i]);
		}

	return EXIT_SUCCESS;
}

int algoritmoLudmila(int* array,int menor, int limite){
		int retorno=-1;
		int auxiliar;
		int indiceMenor;
		int vueltas=0;
		do{
		for(int i=0; i<limite-1; i++){
			utn_MinimoIndice(array, limite, &indiceMenor);
			if(i!=indiceMenor){
				auxiliar= array[i];
				array[i]=array[indiceMenor];
				array[indiceMenor]=auxiliar;
			}
		}
		vueltas++;
		}while(vueltas<limite);
		return retorno;
	}

int utn_MinimoIndice (int* array, int limite, int* resultado){
	int retorno=-1;
	int buffer;
	int bufferIndice;
	if (array!=NULL&&limite>0&&resultado!=NULL){
		retorno=-2;
		for(int i=0;limite>i;i++){
			if(i==0||array[i]<buffer){
				buffer=array[i];
				bufferIndice=i;
				retorno=0;
			}
		}
	}

	*resultado=bufferIndice;
	return retorno;
}
