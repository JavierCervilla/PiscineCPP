/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:21:50 by jcervill          #+#    #+#             */
/*   Updated: 2023/03/07 13:13:46 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CatClass.hpp"

Cat::Cat( void ) : Animal("Cat") {
    this->_brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &src): Animal(src) {
    *this = src;
    std::cout << "Animal of type [" << RED << this->getType() << RESET << "] born with clone constructor!" << std::endl;
}

Cat::Cat(Brain const &src): Animal("Dog") {
    this->setBrain(src);
    std::cout << "Animal of type [" << RED << this->getType() << RESET << "] born with BRAIN constructor!" << std::endl;
}

Cat::~Cat( void ) {
    std::cout << "Cat destructor called" << std::endl;
    delete this->_brain;
}

Cat &Cat::operator=(Cat const &src) {
    this->_brain = new Brain(*src._brain);
    this->_type = src._type;
    return (*this);
}

void Cat::makeSound( void ) const {
    std::cout << "[" << GREEN << this->_type << RESET << "] Miau!" << std::endl;
}

Brain *Cat::getBrain( void ) const{
    return this->_brain;
}

void Cat::setBrain ( Brain const &brain) {
    this->_brain = new Brain(brain);
}