/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:21:50 by jcervill          #+#    #+#             */
/*   Updated: 2022/07/17 23:23:47 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogClass.hpp"

Dog::Dog( void ) : Animal("Dog") {
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog( void ) {
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &src) {
    this->_type = src._type;
    return (*this);
}

void Dog::makeSound( void ) const {
    std::cout << "[" << GREEN << this->_type << RESET << "] Woof!" << std::endl;
}