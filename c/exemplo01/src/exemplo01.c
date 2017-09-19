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
	pessoa_init(&pessoas[0], "João", 35, 1.63, 82);
	pessoa_init(&pessoas[1], "Maria", 40, 1.58, 75);
	pessoa_init(&pessoas[2], "Antônio", 82, 1.71, 63);

	int i = 0;
	for (i = 0; i < TAM; ++i) {
		char str_pessoa[50];
		pessoa_tostring(&pessoas[i], str_pessoa);
		printf("%s\n", str_pessoa);
	}

	return EXIT_SUCCESS;
}
