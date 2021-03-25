/*
 * utn.c
 *
 * 1) Desarrollar una biblioteca "utn.h" que posea funciones para pedirle al usuario el ingreso de datos

		getInt()
		getFloat()
		getChar()
 */
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

 int _getInt (char* mensaje){
	 int numeroInt;
	 printf("%s",mensaje);
	 scanf("%d",&numeroInt);
	 return numeroInt;
 }
float _getFloat(char* mensaje){
	float numeroFloat;
	 printf("%s",mensaje);
	 scanf("%f",&numeroFloat);
	return numeroFloat;
}
char _getChar(char* mensaje){
	char letra;
	 printf("%s",mensaje);
	__fpurge(stdin);
	scanf("%c",&letra);
	return letra;
}
int pista (int bufferInt, int respuesta){
	int retorno;
	if(bufferInt>100){
		retorno=-1;
	}
	else if(bufferInt<0){
		retorno=0;
	}
	else if(bufferInt==respuesta){
		retorno=1;
	}
	else if(bufferInt>respuesta){
		retorno=2;
	}
	else if(bufferInt<respuesta){
		retorno=3;
	}
	return retorno;
}















