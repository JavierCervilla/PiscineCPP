/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCatClass.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:21:50 by jcervill          #+#    #+#             */
/*   Updated: 2022/08/08 11:25:06 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCatClass.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) {
    *this = src;
    std::cout << "Animal of type [" << RED << this->getType() << RESET << "] born with clone constructor!" << std::endl;
}

WrongCat::~WrongCat( void ) {
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &src) {
    this->_type = src._type;
    return (*this);
}