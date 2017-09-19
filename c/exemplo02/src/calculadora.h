/*
 * calculadora.h
 *
 *  Created on: 19 de set de 2017
 *      Author: 01456231650
 */

#ifndef CALCULADORA_H_
#define CALCULADORA_H_

/*
 * definição da estrutura
 */
typedef struct calculadora_t {
	int num1;
	int num2;
} calculadora_t;

/*
 * definição das funções
 */
extern void calculadora_init(calculadora_t*, int, int);
extern int calculadora_somar(calculadora_t*);
extern int calculadora_subtrair(calculadora_t*);
extern int calculadora_multiplicar(calculadora_t*);
extern double calculadora_dividir(calculadora_t*);

#endif /* CALCULADORA_H_ */
