# Exemplo 01 Makefile
#
# Help about Makefiles:
# http://mrbook.org/blog/tutorials/make/
#
# Syntax:
#	target: dependencies
#	[tab] system command

# Configurações de compilação
CXX = g++
FLAGS = -O2 -Wall

all:
	$(CXX) $(FLAGS) -I ../libs/libcalc \
		-o bin/exemplo03 \
		src/main.cpp \
		../libs/libcalc/libcalc.lib -lm
	
clean:
	rm -f bin/*.o
	rm -f bin/*.exe
	