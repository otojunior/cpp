Exemplo 02:
-----------
Hello World utilizando classe.
Compila��o:
	g++ -o exemplo02 libs/*.cpp *.cpp

Criando biblioteca est�tica:
$src/lib> g++ -c Calculadora.cpp
$src/lib> ar crv libcalc.lib Calculadora.o

Compilando com biblioteca est�tica:
$> g++ -o exemplo02 src/exemplo02.cpp src/lib/libcalc.lib -lm