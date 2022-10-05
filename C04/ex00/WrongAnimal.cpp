/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:02:59 by jcervill          #+#    #+#             */
/*   Updated: 2022/10/05 11:54:28 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) :_type("undefined"){
    std::cout << "WrongAnimal of type [" << RED << this->_type << RESET << "] born with default constructor!" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type) {
    std::cout << "WrongAnimal of type [" << RED << this->_type << RESET << "] born with std::string type constructor!" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &src ) {
    this->_type = src._type;
    std::cout << "WrongAnimal of type [" << RED << this->_type << RESET << "] born with clone constructor!" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
    std::cout << "WrongAnimal of type [" << RED << this->_type << RESET << "] destructed!" << std::endl; 
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src) {
    this->_type = src._type;
    return (*this);
}

std::string WrongAnimal::getType( void ) const {
    return (this->_type);
}

void WrongAnimal::setType( std::string type ) {
    this->_type = type;
}

void WrongAnimal::makeSound( void ) const {
    std::cout << "WRONGANIMAL [" << RED << this->_type << RESET << "] Shhhh.... ** undefined sounds **" << std::endl;
}