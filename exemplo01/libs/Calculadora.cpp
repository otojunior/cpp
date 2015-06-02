#include "Calculadora.h"

Calculadora::Calculadora(int n1, int n2) {
	num1 = n1;
	num2 = n2;
}

int Calculadora::somar() {
	return num1 + num2;
}

int Calculadora::subtrair() {
	return num1 - num2;
}