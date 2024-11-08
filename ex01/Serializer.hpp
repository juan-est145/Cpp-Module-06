#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <stdint.h>
#include <ios>

typedef struct s_data 
{
	std::string		string;
	int 			integer;
	bool			boolean;
}				Data;

class Serializer
{
private:
	Serializer();
	Serializer(const Serializer &copy);
	Serializer &operator=(const Serializer &assign);
	~Serializer();

public:
	static uintptr_t serialize(Data* ptr);
	static Data *deserialize(uintptr_t raw);
};

#endif