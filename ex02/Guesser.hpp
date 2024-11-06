#ifndef GUESSER_HPP
#define GUESSER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

class Guesser
{
public:
	static Base *generate(void);
	static void identify(Base* p);
	static void identify(Base &p);
private:
	Guesser(void);
	Guesser(const Guesser &copy);
	Guesser &operator=(const Guesser &assign);
	~Guesser(void);
};

#endif