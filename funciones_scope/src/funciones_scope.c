/*
 ============================================================================
 Name        : funciones_scope.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int var;
void carga(void);

int main(void) {
	setbuf(stdout,NULL);
	//int x,y,z;
	var=5;
	carga();
	printf("%d",var);

	return EXIT_SUCCESS;
}

void carga (void){
	//int var;
	var=3;
}
