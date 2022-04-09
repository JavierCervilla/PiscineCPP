/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedClass.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:58:49 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/09 18:08:11 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FixedClass.hpp"

Fixed::Fixed(void) {
    this->_fixedPointValue = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &fixed) {
    std::cout << "Assignation operator called" << std::endl;
    this->_fixedPointValue = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointValue);
}

void Fixed::setRawBits( int const raw ) {
    this->_fixedPointValue = raw;
}