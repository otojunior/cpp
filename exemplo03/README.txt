Exemplo 02:
-----------
Hello World utilizando classe.
Compilação:
	g++ -o exemplo02 libs/*.cpp *.cpp

Criando biblioteca estática:
$src/libs> g++ -c Calculadora.cpp
$src/libs> ar crv libcalc.lib Calculadora.o

Compilando com biblioteca estática:
$> g++ -o exemplo02 src/exemplo02.cpp src/lib/libcalc.lib -lm

Para compilar o teste de unidade:
$src/libs> g++ -I d:\cpp\tools\gtest-1.7.0\include -o teste Calculadora.cpp CalculadoraTest.cpp libgtest.a libgtest_main.a -lm