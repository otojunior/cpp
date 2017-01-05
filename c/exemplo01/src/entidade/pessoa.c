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
PESSOA pessoa_init(char* _nome, int _idade, double _altura, double _peso) {
	PESSOA pessoa;
	strcpy(pessoa.nome, _nome);
	pessoa.idade = _idade;
	pessoa.altura = _altura;
	pessoa.peso = _peso;
	return pessoa;
}

/*
 *
 */
void pessoa_tostring(char* _string, PESSOA _pessoa) {
	char str_idade[5] = "";
	char str_altura[5] = "";
	char str_peso[5] = "";

	itoa(_pessoa.idade, str_idade, 10);
	snprintf(str_altura, 5, "%f", _pessoa.altura);
	snprintf(str_peso, 5, "%f", _pessoa.peso);

	char str_pessoa[100] = "";
	strcpy(str_pessoa, "");
	strcat(str_pessoa, "[nome=");
	strcat(str_pessoa, _pessoa.nome);
	strcat(str_pessoa, ",idade=");
	strcat(str_pessoa, str_idade);
	strcat(str_pessoa, ",altura=");
	strcat(str_pessoa, str_altura);
	strcat(str_pessoa, ",peso=");
	strcat(str_pessoa, str_peso);
	strcat(str_pessoa, "]");
	strcpy(_string, str_pessoa);
}
