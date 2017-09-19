/*
 ============================================================================
 Name        : exemplo02.c
 Author      : Oto Soares Coelho J�nior
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "calculadora.h"

int main(int argc, char** argv) {
	puts("exemplo02");

	calculadora_t calc;
	calculadora_init(&calc, 10, 7);
	printf("Soma: %d\n", calculadora_somar(&calc));
	printf("Subtra��o: %d\n", calculadora_subtrair(&calc));
	printf("Multiplica��o: %d\n", calculadora_multiplicar(&calc));
	printf("Divis�o: %f\n", calculadora_dividir(&calc));

	return EXIT_SUCCESS;
}
