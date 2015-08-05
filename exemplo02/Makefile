# Exemplo 01 Makefile
#
# Help about Makefiles:
# http://mrbook.org/blog/tutorials/make/
#
# Syntax:
#	target: dependencies
#	[tab] system command

SOURCE = src
SOURCE_LIBS = src/libs
TARGET = bin
TARGET_LIBS = bin/libs
AR = ar
CXX = g++
FLAGS = -O2 -Wall

all:
	$(CXX) $(FLAGS) -c -o $(TARGET_LIBS)/Calculadora.o $(SOURCE_LIBS)/Calculadora.cpp
	$(AR) crv $(TARGET_LIBS)/libcalc.lib $(TARGET_LIBS)/Calculadora.o
	$(CXX) $(FLAGS) -o $(TARGET)/exemplo02 $(SOURCE)/exemplo02.cpp $(TARGET_LIBS)/libcalc.lib -lm
	
clean:
	rm -f bin/libs/*.o
	rm -f bin/libs/*.lib
	rm -f bin/*.exe
	