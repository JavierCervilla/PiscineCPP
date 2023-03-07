/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:21:50 by jcervill          #+#    #+#             */
/*   Updated: 2023/03/07 16:55:54 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogClass.hpp"

Dog::Dog( void ) : Animal("Dog") {
    this->_brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src) {
    *this = src;
    std::cout << "Animal of type [" << RED << this->getType() << RESET << "] born with clone constructor!" << std::endl;
}

Dog::Dog(Brain const  &src): Animal("Dog") {
    this->setBrain(src);
    std::cout << "Animal of type [" << RED << this->getType() << RESET << "] born with BRAIN constructor!" << std::endl;
}

Dog::~Dog( void ) {
    std::cout << "Dog destructor called" << std::endl;
    delete this->_brain;
}

Dog &Dog::operator=(Dog const &src) {
    if (this->_brain)
        delete this->_brain;
    this->_brain = new Brain(*src._brain);
    this->_type = src._type;
    return (*this);
}

void Dog::makeSound( void ) const {
    std::cout << "[" << GREEN << this->_type << RESET << "] Woof!" << std::endl;
}

Brain *Dog::getBrain( void ) const{
    return this->_brain;
}

void Dog::setBrain ( Brain const &brain) {
    if (this->_brain)
        delete this->_brain;
    this->_brain = new  Brain(brain);
}