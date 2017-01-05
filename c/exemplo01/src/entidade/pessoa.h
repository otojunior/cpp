/*
 * psssoa.h
 *
 *  Created on: 5 de jan de 2017
 *      Author: 01456231650
 */

#ifndef ENTIDADE_PESSOA_H_
#define ENTIDADE_PESSOA_H_

/*
 * Defini��o da entidade.
 */
typedef struct TPessoa {
	char nome[30];
	int idade;
	double altura;
	double peso;
} PESSOA;

/*
 * Defini��o das fun��es
 */
extern PESSOA pessoa_init(char*, int, double, double);
extern void pessoa_tostring(char*, PESSOA);

#endif /* ENTIDADE_PESSOA_H_ */
