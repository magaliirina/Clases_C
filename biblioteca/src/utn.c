/*
 * utn.c
 *
 *  Created on: 23 mar. 2021
 *      Author: Irina Narciso
 */


#include <stdio.h>
#include <stdlib.h>

int calculo_Superficie(float a, float b,float* direccionSuperficie){
	int stop;
	if(a==0&&b==0){
		stop=1;
	}
	else{
		*direccionSuperficie=a*b;
		stop=0;
	}
	return stop;
}

