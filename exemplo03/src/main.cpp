#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {
	Calculadora c1(1, 2);
	cout << "Soma: " << c1.somar() << "\n";
	
	Calculadora c2(10, 4);
	cout << "Subtrair: " << c2.subtrair() << "\n";
	
	Calculadora c3(3, 2);
	cout << "Multiplicar: " << c3.multiplicar() << "\n";
	
	Calculadora c4(18, 9);
	cout << "Dividir: " << c4.dividir() << "\n";
	
	return 0;
}