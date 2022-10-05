/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimalClass.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:02:59 by jcervill          #+#    #+#             */
/*   Updated: 2022/08/08 11:15:30 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimalClass.hpp"

WrongAnimal::WrongAnimal( void ) :_type("undefined"){
    std::cout << "WrongAnimal of type [" << RED << this->_type << RESET << "] born with default constructor!" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type) {
    std::cout << "WrongAnimal of type [" << RED << this->_type << RESET << "] born with std::string type constructor!" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &src ) {
    *this = src;
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
    std::cout << "[" << RED << this->_type << RESET << "] Shhhh.... ** undefined sounds **" << std::endl;
}