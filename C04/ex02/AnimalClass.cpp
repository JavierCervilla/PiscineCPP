/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnimalClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:02:59 by jcervill          #+#    #+#             */
/*   Updated: 2023/03/08 15:37:29 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalClass.hpp"

Animal::Animal( void ) :_type("undefined"){
    std::cout << "Animal of type [" << RED << this->_type << RESET << "] born with default constructor!" << std::endl;
}

Animal::Animal( std::string type ) : _type(type) {
    std::cout << "Animal of type [" << RED << this->_type << RESET << "] born with std::string type constructor!" << std::endl;
}

Animal::Animal( Animal const &src ) {
    *this = src;
    std::cout << "Animal of type [" << RED << this->_type << RESET << "] born with clone constructor!" << std::endl;
}

Animal::~Animal( void ) {
    std::cout << "Animal of type [" << RED << this->_type << RESET << "] destructed!" << std::endl; 
}

Animal &Animal::operator=(Animal const &src) {
    this->_type = src._type;
    return (*this);
}

std::string Animal::getType( void ) const {
    return (this->_type);
}

void Animal::setType( std::string type ) {
    this->_type = type;
}