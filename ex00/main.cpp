/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:27:17 by juestrel          #+#    #+#             */
/*   Updated: 2024/11/06 17:38:37 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

int main (int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Invalid number of arguments, you need to pass one for it to be converted" << std::endl;
		return (1);
	}
	ScalarConversion::conversion(argv[1]);
	return (0);
}