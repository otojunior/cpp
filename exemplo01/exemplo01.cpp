#include <iostream>
#include "libs/Calculadora.h"

using namespace std;

int main() {
	Calculadora c1(1, 2);
	Calculadora c2(10, 4);
	cout << "Soma: " << c1.somar() << "\n";
	cout << "Subtrair: " << c2.subtrair() << "\n";
	return 0;
}