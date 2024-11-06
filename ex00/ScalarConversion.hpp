#ifndef SCALARCONVERSION_HPP
#define SCALARCONVERSION_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

class ScalarConversion
{
private:
	ScalarConversion(void);
	ScalarConversion(const ScalarConversion &copy);
	ScalarConversion &operator=(const ScalarConversion &assign);
	static void printChar(char *toConvert);
	static void printInt(char *toConvert);
	static void printFloat(char *toConvert);
	static void printDouble(char *toConvert);
	static bool checkValidity(char *str);
	static bool	checkFloats(char *str, int *i, int *validity);
	~ScalarConversion();
public:
	static void conversion(char *literal);
};

#endif