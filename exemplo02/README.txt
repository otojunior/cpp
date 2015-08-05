Exemplo 02:
-----------
Hello World utilizando classe.
Compilação:
	g++ -o exemplo02 libs/*.cpp *.cpp

Criando biblioteca estática:
$src/lib> g++ -c Calculadora.cpp
$src/lib> ar crv libcalc.lib Calculadora.o

Compilando com biblioteca estática:
$> g++ -o exemplo02 src/exemplo02.cpp src/lib/libcalc.lib -lm