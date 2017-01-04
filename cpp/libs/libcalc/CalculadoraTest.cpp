#include "Calculadora.h"
#include "gtest/gtest.h"
#include <iostream>

// The fixture for testing class Foo.
class CalculadoraTest : public ::testing::Test {
	protected:
		// You can remove any or all of the following functions if its body
		// is empty.

		CalculadoraTest() {	}
		virtual ~CalculadoraTest() { }

		// If the constructor and destructor are not enough for setting up
		// and cleaning up each test, you can define the following methods:

		virtual void SetUp() {
			// Code here will be called immediately after the constructor (right
			// before each test).
		}

		virtual void TearDown() {
			// Code here will be called immediately after each test (right
			// before the destructor).
		}

	// Objects declared here can be used by all tests in the test case for Calculadora.
};

TEST_F(CalculadoraTest, MethodSomar) {
	Calculadora c(2, 3);
	EXPECT_EQ(5, c.somar());
}

TEST_F(CalculadoraTest, MethodSubtrair) {
	Calculadora c(5, 4);
	EXPECT_EQ(1, c.subtrair());
}

TEST_F(CalculadoraTest, MethodMultiplicar) {
	Calculadora c(2, 3);
	EXPECT_EQ(6, c.multiplicar());
}

TEST_F(CalculadoraTest, MethodDividir) {
	Calculadora c(18, 9);
	EXPECT_EQ(2, c.dividir());
}

