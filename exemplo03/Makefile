# Exemplo 01 Makefile
#
# Help about Makefiles:
# http://mrbook.org/blog/tutorials/make/
#
# Syntax:
#	target: dependencies
#	[tab] system command

# Paths genéricos
SOURCE = src
TARGET = bin
SOURCE_LIBS = $(SOURCE)/libs
TARGET_LIBS = $(TARGET)/libs

# Paths específicos
GTEST = d:/cpp/tools/gtest-1.7.0

# Configurações de compilação
AR = ar
CXX = g++
FLAGS = -O2 -Wall

all:
	$(CXX) $(FLAGS) -c -o $(TARGET_LIBS)/Calculadora.o $(SOURCE_LIBS)/Calculadora.cpp
	$(AR) crv $(TARGET_LIBS)/libcalc.lib $(TARGET_LIBS)/Calculadora.o
	$(CXX) $(FLAGS) -o $(TARGET)/exemplo03 $(SOURCE)/exemplo03.cpp $(TARGET_LIBS)/libcalc.lib -lm
	
clean:
	rm -f bin/libs/*.o
	rm -f bin/libs/*.lib
	rm -f bin/*.exe
	
test:
	$(CXX) -I $(GTEST)/include -o $(TARGET)/test $(SOURCE_LIBS)/Calculadora.cpp $(SOURCE_LIBS)/CalculadoraTest.cpp $(SOURCE_LIBS)/libgtest.a $(SOURCE_LIBS)/libgtest_main.a -lm