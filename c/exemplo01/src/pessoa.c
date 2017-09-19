/*
 * pessoa.c
 *
 *  Created on: 5 de jan de 2017
 *      Author: 01456231650
 */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "pessoa.h"

/*
 *
 */
void pessoa_init(pessoa_t* pessoa, char* nome, int idade, double altura, double peso) {
	strcpy(pessoa->nome, nome);
	pessoa->idade = idade;
	pessoa->altura = altura;
	pessoa->peso = peso;
}

/*
 *
 */
void pessoa_tostring(const pessoa_t* pessoa, char* str) {
	char str_idade[5] = "";
	char str_altura[5] = "";
	char str_peso[5] = "";

	itoa(pessoa->idade, str_idade, 10);
	snprintf(str_altura, 5, "%f", pessoa->altura);
	snprintf(str_peso, 5, "%f", pessoa->peso);

	char str_pessoa[100] = "";
	strcpy(str_pessoa, "");
	strcat(str_pessoa, "[nome=");
	strcat(str_pessoa, pessoa->nome);
	strcat(str_pessoa, ",idade=");
	strcat(str_pessoa, str_idade);
	strcat(str_pessoa, ",altura=");
	strcat(str_pessoa, str_altura);
	strcat(str_pessoa, ",peso=");
	strcat(str_pessoa, str_peso);
	strcat(str_pessoa, "]");
	strcpy(str, str_pessoa);
}
