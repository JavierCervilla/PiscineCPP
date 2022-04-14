/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:21:50 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/11 23:21:50 by jcervill         ###   ########.fr       */
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

Dog::makeSound( void ) {
    std::cout << "[" << GREEN << this->_type << RESET << "] Woof!" << std::endl;
}