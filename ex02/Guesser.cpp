#include "Guesser.hpp"

Guesser::Guesser()
{
}

Guesser::Guesser(const Guesser &copy)
{
	*this = copy;
}

Guesser &Guesser::operator=(const Guesser &assign)
{
	(void)assign;
	return *this;
}

Base *Guesser::generate(void)
{
	srand(time(NULL));
	int number = rand() % 3;
	if (number == 0)
		return new A();
	else if (number == 1)
		return new B();
	return new C();
}

void Guesser::identify(Base *p)
{
	std::cout << "The pointer is of type ";
	if (dynamic_cast<A *>(p))
		std::cout << "A";
	if (dynamic_cast<B *>(p))
		std::cout << "B";
	if (dynamic_cast<C *>(p))
		std::cout << "C";
	std::cout << std::endl;
}

void Guesser::identify(Base &p)
{
	(void)p;
}

Guesser::~Guesser()
{
}