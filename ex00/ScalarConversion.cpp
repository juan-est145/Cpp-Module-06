/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:27:20 by juestrel          #+#    #+#             */
/*   Updated: 2024/11/06 17:36:35 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"


ScalarConversion::ScalarConversion() {}

ScalarConversion::ScalarConversion(const ScalarConversion &copy)
{
	*this = copy;
}

ScalarConversion & ScalarConversion::operator=(const ScalarConversion &assign)
{
	(void) assign;
	return *this;
}

void ScalarConversion::printChar(char *toConvert)
{
	char c = static_cast<char>(std::atoi(toConvert));
	std::cout << "char: ";
	if (std::isprint(c))
		std::cout << "'" << c << "'" << std::endl;
	else if (ScalarConversion::checkValidity(toConvert) == false)
		std::cout << "impossible" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void ScalarConversion::printInt(char *toConvert)
{
	long integer = std::atol(toConvert);
	std::cout << "int: ";
	if (integer > 2147483647 || integer < -2147483648
		|| ScalarConversion::checkValidity(toConvert) == false)
		std::cout << "impossible" << std::endl;
	else
		std::cout << integer << std::endl;
}

void ScalarConversion::printFloat(char *toConvert)
{
	float floating = std::atof(toConvert);
	std::cout << "float: ";
	if (toConvert[0])
	{
		if (std::floor(floating) == std::atol(toConvert) && std::ceil(floating) == std::atol(toConvert))
			std::cout << floating << ".0f" << std::endl;
		else
			std::cout << floating << "f" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

void ScalarConversion::printDouble(char *toConvert)
{
	double d = std::atof(toConvert);
	std::cout << "double: ";
	if (toConvert[0])
	{
		if (std::floor(d) == std::atof(toConvert) && std::ceil(d) == std::atof(toConvert))
			std::cout << d << ".0" << std::endl;
		else
			std::cout << d << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

void ScalarConversion::conversion(char *toConvert)
{
	if (!toConvert)
	{
		std::cerr << "Error, argument can't be null" << std::endl;
		return ;
	}
	ScalarConversion::printChar(toConvert);
	ScalarConversion::printInt(toConvert);
	ScalarConversion::printFloat(toConvert);
	ScalarConversion::printDouble(toConvert);
}

bool	ScalarConversion::checkFloats(char *str, int *i, int *validity)
{
	int	sign = 0;

	while (str[*i])
	{
		if (str[*i] == '.')
		{
			if (sign == 0 && str[*i + 1] >= '0' && str[*i + 1] <= '9')
			{
				sign++;
				(*validity)++;
			}
		}
		if (str[*i] >= '0' && str[*i] <= '9')
			(*validity)++;
		(*i)++;
	}
	if (str[*i - 1] == 'f' && ((*validity + 1) == *i))
		(*validity)++;
	return (sign && (*validity == *i));
}

bool	ScalarConversion::checkValidity(char *str)
{
	int	i = 0;
	int	validity = 0;
	int	sign = 0;


	if (!*str)
		return (0);
	while (str[i] && str[i] != '.')
	{
		if (str[0] == '-' || str[0] == '+')
		{
			if (sign == 0 && str[i + 1] >= '0' && str[i + 1] <= '9')
			{
				sign++;
				validity++;
			}
		}
		if (str[i] >= '0' && str[i] <= '9')
			validity++;
		i++;
	}
	if (validity == 0)
		return (0);
	return (checkFloats(str, &i, &validity) || (validity == i));
}

ScalarConversion::~ScalarConversion() {}
