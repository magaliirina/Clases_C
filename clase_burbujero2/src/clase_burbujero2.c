/*
 ============================================================================
Solicitar al usuario 5 números, almacenar estos en un array de enteros,
 permitir listarlos por pantalla indicando el máximo, el mínimo y el promedio. Permitir
Modificar el valor de cualquiera de los números cargados indicando el índice del mismo
y su nuevo valor.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "utn.h"
#define TAM 5


int main(void) {
	int numeros [TAM];
	ingresoNumeros(numeros, TAM, "Ingrese el numero ");
	ordenarArray(numeros, TAM);
	for(int i=0;i<TAM;i++){
		printf("%d numero: %d\n",i+1,numeros[i]);
	}
	minimoArrayOrdenado(numeros);
	maximoArrayOrdenado(numeros, TAM);
	cambioIndiceValor(numeros, "Ingrese el indice y el valor nuevo: ");

	return EXIT_SUCCESS;
}


