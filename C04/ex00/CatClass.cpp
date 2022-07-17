/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:21:50 by jcervill          #+#    #+#             */
/*   Updated: 2022/07/17 23:52:15 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CatClass.hpp"

Cat::Cat( void ) : Animal("Cat") {
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat( void ) {
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &src) {
    this->_type = src._type;
    return (*this);
}

void Cat::makeSound( void ) const {
    std::cout << "[" << GREEN << this->_type << RESET << "] Miau!" << std::endl;
}