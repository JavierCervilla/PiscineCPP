/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:21:50 by jcervill          #+#    #+#             */
/*   Updated: 2022/08/08 15:43:13 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CatClass.hpp"

Cat::Cat( void ) : Animal("Cat") {
    this->_brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &src) {
    *this = src;
    std::cout << "Animal of type [" << RED << this->getType() << RESET << "] born with clone constructor!" << std::endl;
}

Cat::~Cat( void ) {
    delete this->_brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &src) {
    this->_brain = new Brain(*src._brain);
    this->_type = src._type;
    return (*this);
}

void Cat::makeSound( void ) const {
    std::cout << "[" << GREEN << this->_type << RESET << "] Miau!" << std::endl;
}