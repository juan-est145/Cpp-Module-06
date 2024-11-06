/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:42:10 by juestrel          #+#    #+#             */
/*   Updated: 2024/11/06 19:07:45 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data testStruct;

	testStruct.string = "Hola caracola";
	testStruct.integer = 42;
	testStruct.boolean = true;

	std::cout << "testStruct address is " << &testStruct << std::endl;
	std::cout << "testStruct string is " << testStruct.string << std::endl;
	std::cout << "testStruct integer is " << testStruct.integer << std::endl;
	std::cout << "testStruct boolean is " << testStruct.boolean << std::endl;

	uintptr_t number = Serializer::serialize(&testStruct);
	std::cout << "Number is " << number << ", which converted to hex is " << std::hex << number << std::endl;
	
	Data *returnData = Serializer::deserialize(number);
	std::cout << "returnData address is " << returnData << std::endl;
	std::cout << "returnData string is " << returnData->string << std::endl;
	std::cout << "returnData integer is " << std::dec << returnData->integer << std::endl;
	std::cout << "returnData boolean is " << returnData->boolean << std::endl;

	returnData->string = "We can change the value of testStruct string";
	std::cout << "The string of testStruct string is " << testStruct.string << std::endl;
	return (0);
}