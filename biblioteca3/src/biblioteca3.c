/*
 ============================================================================
 Name        : biblioteca3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {
	int numeroI;
	float numeroF;
	char letra;
	numeroI=_getInt();
	numeroF=_getFloat();
	letra=_getChar();
	printf("%d %f %c",numeroI,numeroF,letra);
	return EXIT_SUCCESS;
}
