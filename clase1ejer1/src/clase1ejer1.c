/*
 ============================================================================
 Name        : clase1ejer1.c
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
	int numeroUno;
	int numeroDos;
	int suma;
	int resta;
	int multiplicacion;
	int division;
	printf("Ingrese el primer numero:\n");
	scanf("%d",&numeroUno);
	printf("Ingrese el segundo numero:\n");
	scanf("%d",&numeroDos);
	suma=numeroUno+numeroDos;
	resta=numeroUno-numeroDos;
	division=numeroUno/numeroDos;
	multiplicacion=numeroUno*numeroDos;
	printf("La suma es:%d\n",suma);
	printf("La resta es:%d\n",resta);
	printf("La division es:%d\n",division);
	printf("La multiplicacion es:%d\n",multiplicacion);

	return EXIT_SUCCESS;
}
