/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:49:56 by juestrel          #+#    #+#             */
/*   Updated: 2024/11/06 23:12:32 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void)
{
	Base *test = Guesser::generate();
	Guesser::identify(test);
	Guesser::identify(*test);

	delete test;
	return (0);
}