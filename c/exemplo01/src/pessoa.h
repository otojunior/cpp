/*
 * psssoa.h
 *
 *  Created on: 5 de jan de 2017
 *      Author: 01456231650
 */

#ifndef PESSOA_H_
#define PESSOA_H_

/*
 * definição da entidade.
 */
typedef struct pessoa_t {
	char nome[30];
	int idade;
	double altura;
	double peso;
} pessoa_t;

/*
 * definição das funções
 */
extern void pessoa_init(pessoa_t*, char*, int, double, double);
extern void pessoa_tostring(const pessoa_t*, char*);

#endif /* PESSOA_H_ */
