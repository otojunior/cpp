/*
 ============================================================================
 Name        : exemplo01.c
 Author      : Oto Junior
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "entidade/pessoa.h"

/*
 * Macro constantes.
 */
#define TAM 3

/**
 * Programa principal.
 */
int main(void) {
	puts("Exemplo 01"); /* prints Exemplo 01 */

	PESSOA pessoas[TAM];
	pessoas[0] = pessoa_init("João", 35, 1.63, 82);
	pessoas[1] = pessoa_init("Maria", 40, 1.58, 75);
	pessoas[2] = pessoa_init("Antônio", 82, 1.71, 63);

	int i = 0;
	for (i = 0; i < TAM; ++i) {
		char str_pessoa[50];
		pessoa_tostring(str_pessoa, pessoas[i]);
		printf("%s\n", str_pessoa);
	}

	return EXIT_SUCCESS;
}
