/*
 * calculadora.c
 *
 *  Created on: 19 de set de 2017
 *      Author: 01456231650
 */

#include "calculadora.h"

/*
 *
 */
void calculadora_init(calculadora_t* calc, int x, int y) {
	calc->num1 = x;
	calc->num2 = y;
}

/*
 *
 */
int calculadora_somar(calculadora_t* calc) {
	return (calc->num1 + calc->num2);
}

/*
 *
 */
int calculadora_subtrair(calculadora_t* calc) {
	return (calc->num1 - calc->num2);
}

/*
 *
 */
int calculadora_multiplicar(calculadora_t* calc) {
	return (calc->num1 * calc->num2);
}

/*
 *
 */
double calculadora_dividir(calculadora_t* calc) {
	double aux = (double)calc->num1;
	return (aux / calc->num2);
}

