/*
 ============================================================================
Funcion usada para verificar el ingreso de caracteres.Chequea para que
solo sean admitidas las letras S o N.
Se ingresa void y devuelve un entero sin signo
0 si se ingreso la N
1 si se ingreso la S
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include"utn.h"

int main(void) {
	setbuf(stdout,NULL);
	unsigned int mensaje;

	mensaje=ingresoChar();
	if (mensaje==1){
		printf("Ingreso la S");
	}
	else if(mensaje==0){
		printf("Ingreso la N");
	}
	else{
		printf("Error");
	}

	return EXIT_SUCCESS;
}

