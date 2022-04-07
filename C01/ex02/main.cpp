/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:45:16 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/07 12:57:11 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main () {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string *stringREF = stringPTR;

	std::cout << "Adress memory (str): " << &str << std::endl;
	std::cout << "Adress memory (stringPTR): " << stringPTR << std::endl;
	std::cout << "Adress memory (stringREF): " << stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Content (str): " << str << std::endl;
	std::cout << "Content (stringPTR): " << *stringPTR << std::endl;
	std::cout << "Content (stringREF): " << *stringREF << std::endl;

	return (0);
}