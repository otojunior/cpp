#ifndef CALCULADORA_H
#define CALCULADORA_H

class Calculadora {
	private:
		int num1;
		int num2;
	public:
		Calculadora(int, int);
		int somar();
		int subtrair();
		int multiplicar();
		double dividir();
};

#endif